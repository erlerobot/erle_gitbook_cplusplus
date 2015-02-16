## Compiling  C++

When using C++ you will need two things: an editor and a compiler.

######Editor

As editor we recommend you these two:
- *Sublime Text*:  is a sophisticated text editor for code, markup and prose.You can download it for free in this [link](http://www.sublimetext.com/).
- *Vim Text Editor*: Vim is a highly configurable text editor built to enable efficient text editing. It is an improved version of the vi editor distributed with most UNIX systems.You can download it [here](http://www.vim.org/index.php). When using vim you will also be capable of writing and runing programs; if you install this Plugin: http://www.thegeekstuff.com/2009/01/tutorial-make-vim-as-your-cc-ide-using-cvim-plugin/

######Compilers

About the compiler, as we have see you can use the vim text editor itselfs.
Also, you need to install gcc and g++:

- Unix/Linux: http://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/


- Macintosh: [Install Xcode and command line tools](https://developer.apple.com/downloads/index.action?name=for%20Xcode%20-)

- Windows:
 + [Microsoft Visual C++ 2008 Express]( http://www.microsoft.com/express/vc/)
 + [Mingw](http://www.mingw.org/wiki/HOWTO_Install_the_MinGW_GCC_Compiler_Suite)

######Extensions

When you create a C++ file to be able to execute it, the file should have the **correct extension**:

Historically, the first extensions used for C++ were `.c` and `.h`, exactly like for C. This caused practical problems, especially the .c which didn't allow build systems to easily differentiate C++ and C files.

Unix, on which C++ has been developed, has case sensitive file systems. So some used `.C `for C++ files. Other used `.c++`, `.cc` and `.cxx.`  .`.C `and `.c++` have the problem that they aren't available on other file systems and their use quickly dropped. DOS and Windows C++ compilers tended to use `.cpp`, and some of them make the choice difficult, if not impossible, to configure. Portability consideration made that choice the most common, even outside MS-Windows.

Headers have used the corresponding `.H`, `.h++`, `.hh`, `.hxx` and `.hpp`. But unlike the main files, .h remains to this day a popular choice for C++ even with the disadvantage that it doesn't allow to know if the header can be included in C context or not. Standard headers now have no extension at all.

Additionally, some are using `.ii`, `.ixx`, `.ipp`, `.inl` for headers providing inline definitions and `.txx`, `.tpp` and `.tpl` for template definitions. Those are either included in the headers providing the definition, or manually in the contexts where they are needed.

Compilers and tools usually don't care about what extensions are used, but using an extension that they associate with C++ prevents the need to track out how to configure them so they correctly recognise the language used.

You don't need to know all this extensions, we have mentioned them here, in case you ever find yourself faced with one of them. Through this tutorial we will use mostly `.cpp`extension.
