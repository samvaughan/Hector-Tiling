from setuptools import setup, find_packages, Command
from setuptools.command.install import install
import distutils.command.install as orig
import subprocess
import inspect
import pathlib


# class CustomBuild(build):

#   def run(self):
#         # run original build code
#         build.run(self)


#         def compile():
#           subprocess.call(['make', 'all_clean', '-C', 'hop/distortion_correction/HectorTranslationSoftware/Code'])
#           subprocess.call(['make', '-C', 'hop/distortion_correction/HectorTranslationSoftware/Code'])

#         self.execute(compile, [], 'Compiling Distortion Correction binary')


class CustomInstall(install):

    user_options = install.user_options

    def initialize_options(self):
        install.initialize_options(self)

    def finalize_options(self):
        install.finalize_options(self)

    def run(self):

        # Copied from the original setup.command.install functions
        if not install._called_from_setup(inspect.currentframe()):
            # Run in backward-compatibility mode to support bdist_* commands.
            orig.install.run(self)
        else:
            install.do_egg_install(self)

        # and now adding in my own bit
        print("...building the Hector Translation code")
        print()
        HERE = pathlib.Path(__file__).parent

        all_clean_command = ['make', 'all_clean', '-C', f'{HERE}/hop/distortion_correction/HectorTranslationSoftware/Code']
        make_command = ['make', '-C', f'{HERE}/hop/distortion_correction/HectorTranslationSoftware/Code']
        print(make_command)
        subprocess.call(all_clean_command)
        subprocess.call(make_command)
        print("...Done!")




# The directory containing this file
HERE = pathlib.Path(__file__).parent

# The text of the README file
README = (HERE / "README.md").read_text()

setup(name='Hector-Observations-Pipeline',
      version='0.2.9dev',
      description='Hector Galaxy Survey Observations pipeline',
      long_description=README,
      long_description_content_type="text/markdown",
      author='Sam Vaughan',
      author_email='sam.vaughan@sydney.edu.au',
      url='https://github.com/samvaughan/Hector-Observations-Pipeline',
      license="GNU",
      classifiers=[
        "Programming Language :: Python :: 3",
        "Programming Language :: Python :: 3.8"],
      packages=find_packages(),
      include_package_data = True,
      python_requires='>=3',
      cmdclass={'install': CustomInstall}
     )

