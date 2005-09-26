#ifndef PosteRazorHelpText_h
#define PosteRazorHelpText_h

#define POSTERAZORHELPSTEPTITLE01 "Load an input image"
#define POSTERAZORHELPSTEPTITLE02 "Define the printer paper size"
#define POSTERAZORHELPSTEPTITLE03 "Define the image tile overlapping"
#define POSTERAZORHELPSTEPTITLE04 "Define the final poster size"
#define POSTERAZORHELPSTEPTITLE05 "Save the Poster"

#define POSTERAZORHELPANCHORTOP "top"
#define POSTERAZORHELPANCHORABOUT "about"
#define POSTERAZORHELPANCHORMANUAL "manual"
#define POSTERAZORHELPANCHORMANUALSTEP "manualstep"
#define POSTERAZORHELPANCHORMANUALSTEP01 "manualstep01"
#define POSTERAZORHELPANCHORMANUALSTEP02 "manualstep02"
#define POSTERAZORHELPANCHORMANUALSTEP03 "manualstep03"
#define POSTERAZORHELPANCHORMANUALSTEP04 "manualstep04"
#define POSTERAZORHELPANCHORMANUALSTEP05 "manualstep05"

#define POSTERAZORHELPINDENTATION "<br>&nbsp;&nbsp;&nbsp;&nbsp;"
#define POSTERAZORHELPENDLINE "\13"

const static const char *posteRazorHelpText =
"<HTML>" POSTERAZORHELPENDLINE \
	"<BODY>" POSTERAZORHELPENDLINE \
		"<A name=\"" POSTERAZORHELPANCHORTOP "\"><CENTER><H1>PosteRazor Help</H1></CENTER></A>" POSTERAZORHELPENDLINE \

		"<H3>Contents</H3>" POSTERAZORHELPENDLINE \
		"<UL>" POSTERAZORHELPENDLINE \
			"<LI><B><A href=\"#" POSTERAZORHELPANCHORABOUT "\">About</A></B></LI>" POSTERAZORHELPENDLINE \
			"<LI><B><A href=\"#" POSTERAZORHELPANCHORMANUAL "\">Manual</A></B></LI>" POSTERAZORHELPENDLINE \
			"<UL>" POSTERAZORHELPENDLINE \
				"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">Step 1: " POSTERAZORHELPSTEPTITLE01 "</A></LI>" POSTERAZORHELPENDLINE \
				"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP02 "\">Step 2: " POSTERAZORHELPSTEPTITLE02 "</A></LI>" POSTERAZORHELPENDLINE \
				"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP03 "\">Step 3: " POSTERAZORHELPSTEPTITLE03 "</A></LI>" POSTERAZORHELPENDLINE \
				"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP04 "\">Step 4: " POSTERAZORHELPSTEPTITLE04 "</A></LI>" POSTERAZORHELPENDLINE \
				"<LI><A href=\"#" POSTERAZORHELPANCHORMANUALSTEP05 "\">Step 5: " POSTERAZORHELPSTEPTITLE05 "</A></LI>" POSTERAZORHELPENDLINE \
			"</UL>" POSTERAZORHELPENDLINE \
		"</UL>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORABOUT "\"><H3>About</H3></A>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "The PosteRazor slices a raster image into pieces which can be printed on a printer and be put together to a poster. <A href=\"#" POSTERAZORHELPANCHORMANUALSTEP01 "\">Many</A> raster image file formats are supported.<br>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUAL "\"><H3>Manual</H3></A>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "PosteRazor has its user interface organized in a \"Wizard\" fashion. All settings for the poster creation can be done in 5 Steps. The <b>Back</b> and <b>Next</b> buttons navigate through these steps.<br>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "The <b>?</b> Button opens a help window with an explanation of the current step. Before working for the first time with the PosteRazor, please choose your the dimension which you intend to work with in the <b>Units</b> chooser on the lower left of the dialog.<br>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "Every input field for a dimension, etc. can as usual be modified with the keyboard but also by clicking on it and dragging the mouse to the left and right. The different mouse buttons in-/de-crease the values in different steps.<br>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "All entries and choices are remembered until the next usage of the PosteRazor.<br>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUALSTEP01 "\"><H3>Step 1: " POSTERAZORHELPSTEPTITLE01 "</H3></A>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "Most of the raster image formats which are supported by FreeImage are also supported by the PosteRazor: BMP, DDS files, Dr. Halo, GIF, ICO, IFF, JBIG, JNG, JPEG/JIF, KOALA, LBM, Kodak PhotoCD, MNG, PCX, PBM, PGM, PNG, PPM, PhotoShop PSD, Sun RAS, TARGA, TIFF, WBMP, XBM, XPM.</br>" POSTERAZORHELPENDLINE \
		POSTERAZORHELPINDENTATION "PosteRazor distinguishes and handles monochrome, greyscale, 4-bit palette, 8-bit palette, 24 bit RGB, and CMYK (only from TIF) images. RGB images with alpha channel are compused on a white background.<br>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUALSTEP02 "\"><H3>Step 2: " POSTERAZORHELPSTEPTITLE02 "</H3></A>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUALSTEP03 "\"><H3>Step 3: " POSTERAZORHELPSTEPTITLE03 "</H3></A>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUALSTEP04 "\"><H3>Step 4: " POSTERAZORHELPSTEPTITLE04 "</H3></A>" POSTERAZORHELPENDLINE \

		"<A name=\"" POSTERAZORHELPANCHORMANUALSTEP05 "\"><H3>Step 5: " POSTERAZORHELPSTEPTITLE05 "</H3></A>" POSTERAZORHELPENDLINE \

	"</BODY>" POSTERAZORHELPENDLINE \
"</HTML>";

#endif