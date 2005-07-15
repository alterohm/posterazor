// generated by Fast Light User Interface Designer (fluid) version 1.0107

#include "PosteRazorDialogUI.h"

void PosteRazorDialogUI::cb_m_nextButton_i(Fl_Button*, void*) {
  next();
}
void PosteRazorDialogUI::cb_m_nextButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_nextButton_i(o,v);
}

void PosteRazorDialogUI::cb_m_prevButton_i(Fl_Button*, void*) {
  prev();
}
void PosteRazorDialogUI::cb_m_prevButton(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->user_data()))->cb_m_prevButton_i(o,v);
}

void PosteRazorDialogUI::cb__i(Fl_Button*, void*) {
  LoadInputImage();
}
void PosteRazorDialogUI::cb_(Fl_Button* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb__i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteWidthInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterAbsoluteHeightInput);
}
void PosteRazorDialogUI::cb_m_posterAbsoluteHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterAbsoluteHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesWidthInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesWidthInput);
}
void PosteRazorDialogUI::cb_m_posterPagesWidthInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesWidthInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPagesHeightInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPagesHeightInput);
}
void PosteRazorDialogUI::cb_m_posterPagesHeightInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPagesHeightInput_i(o,v);
}

void PosteRazorDialogUI::cb_m_posterPercentualSizeInput_i(Fl_Value_Input*, void*) {
  UpdatePosterSizeFields(m_posterPercentualSizeInput);
}
void PosteRazorDialogUI::cb_m_posterPercentualSizeInput(Fl_Value_Input* o, void* v) {
  ((PosteRazorDialogUI*)(o->parent()->parent()->parent()->parent()->user_data()))->cb_m_posterPercentualSizeInput_i(o,v);
}
PosteRazorDialogUI::PosteRazorDialogUI(int X, int Y, int W, int H, const char *L)
  : Fl_Double_Window(X, Y, W, H, L) {
  _PosteRazorDialogUI();
}

PosteRazorDialogUI::PosteRazorDialogUI(int W, int H, const char *L)
  : Fl_Double_Window(0, 0, W, H, L) {
  clear_flag(16);
  _PosteRazorDialogUI();
}

void PosteRazorDialogUI::_PosteRazorDialogUI() {
  PosteRazorDialogUI *w = this;
  PosteRazorDialogUI *o = this;
o->box(FL_FLAT_BOX);
o->color(FL_BACKGROUND_COLOR);
o->selection_color(FL_BACKGROUND_COLOR);
o->labeltype(FL_NO_LABEL);
o->labelfont(0);
o->labelsize(14);
o->labelcolor(FL_BLACK);
o->user_data((void*)(this));
o->align(FL_ALIGN_TOP);
o->when(FL_WHEN_RELEASE);
{ Fl_Group* o = new Fl_Group(10, 400, 600, 25);
  { Fl_Button* o = m_nextButton = new Fl_Button(525, 400, 85, 25, "Next @-2->");
    o->callback((Fl_Callback*)cb_m_nextButton);
  }
  { Fl_Button* o = m_prevButton = new Fl_Button(430, 400, 85, 25, "@-2<- Back");
    o->callback((Fl_Callback*)cb_m_prevButton);
  }
  { Fl_Box* o = new Fl_Box(225, 400, 15, 25);
    Fl_Group::current()->resizable(o);
  }
  o->end();
}
{ Fl_Wizard* o = m_wizard = new Fl_Wizard(360, 10, 250, 380);
  o->box(FL_THIN_DOWN_BOX);
  o->user_data((void*)(this));
  { Fl_Group* o = m_loadInputImageStep = new Fl_Group(360, 10, 250, 380);
    o->color(FL_LIGHT1);
    { Fl_Group* o = new Fl_Group(370, 35, 230, 25, "Input Image");
      { Fl_Button* o = new Fl_Button(575, 35, 25, 25, "...");
        o->callback((Fl_Callback*)cb_);
      }
      { Fl_Box* o = m_inputFileNameLabel = new Fl_Box(370, 35, 205, 25);
        o->box(FL_THIN_DOWN_BOX);
        o->color((Fl_Color)55);
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
        Fl_Group::current()->resizable(o);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(370, 86, 230, 210, "Image information");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 380, 250, 10);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = m_posterSizeStep = new Fl_Group(360, 10, 250, 380);
    o->hide();
    { Fl_Group* o = new Fl_Group(370, 35, 230, 75, "Image size");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterAbsoluteWidthInput = new Fl_Value_Input(450, 45, 90, 24, "Width:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterAbsoluteHeightInput = new Fl_Value_Input(450, 76, 90, 24, "Height:");
        o->callback((Fl_Callback*)cb_m_posterAbsoluteHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterAbsoluteWidthLabel = new Fl_Box(540, 45, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterAbsoluteHeightLabel = new Fl_Box(540, 75, 50, 25, "cm");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(370, 135, 230, 75, "Pages");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPagesWidthInput = new Fl_Value_Input(450, 145, 90, 24, "Width:");
        o->callback((Fl_Callback*)cb_m_posterPagesWidthInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Value_Input* o = m_posterPagesHeightInput = new Fl_Value_Input(450, 176, 90, 24, "Height:");
        o->callback((Fl_Callback*)cb_m_posterPagesHeightInput);
        Fl_Group::current()->resizable(o);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPagesWidthLabel = new Fl_Box(540, 145, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      { Fl_Box* o = m_posterPagesHeightLabel = new Fl_Box(540, 175, 50, 25, "pages");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Group* o = new Fl_Group(370, 236, 230, 45, "Image size (%)");
      o->box(FL_THIN_DOWN_BOX);
      o->color(FL_DARK2);
      o->selection_color(FL_LIGHT3);
      { Fl_Value_Input* o = m_posterPercentualSizeInput = new Fl_Value_Input(450, 246, 90, 24, "Size:");
        o->callback((Fl_Callback*)cb_m_posterPercentualSizeInput);
        o->step(0.1);
        o->range(0, 999);
        o->precision(3);
      }
      { Fl_Box* o = m_posterPercentualWidthLabel = new Fl_Box(540, 246, 50, 25, "%");
        o->align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE);
      }
      o->end();
    }
    { Fl_Box* o = new Fl_Box(360, 380, 250, 10);
      Fl_Group::current()->resizable(o);
    }
    o->end();
  }
  { Fl_Group* o = new Fl_Group(360, 10, 250, 380);
    o->hide();
    o->end();
  }
  { Fl_Group* o = m_savePosterStep = new Fl_Group(360, 10, 250, 380);
    o->hide();
    o->end();
  }
  o->end();
}
{ Fl_Group* o = m_previewImageGroup = new Fl_Group(10, 10, 345, 380);
  o->box(FL_THIN_DOWN_BOX);
  o->color((Fl_Color)34);
  o->selection_color(FL_LIGHT2);
  o->labelfont(1);
  o->labelsize(26);
  o->labelcolor((Fl_Color)61);
  o->align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE);
  o->end();
  Fl_Group::current()->resizable(o);
}
size_range(this->w(), this->h());
end();
}
