// -*- C++ -*-
//
// generated by wxGlade 1.0.0 on Thu Sep 16 18:17:10 2021
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef AIOPROPANEL_H
#define AIOPROPANEL_H

#include <wx/wx.h>
#include <wx/image.h>

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade


class AioProPanel: public wxPanel {
public:
  // begin wxGlade: AioProPanel::ids
  enum {
    masterID = wxID_HIGHEST + 1000,
    wclkSyncID = wxID_HIGHEST + 1001,
    aesSyncID = wxID_HIGHEST + 1002,
    spdifSyncID = wxID_HIGHEST + 1003,
    adatSyncID = wxID_HIGHEST + 1004,
    tcoSyncID = wxID_HIGHEST + 1005,
    syncInSyncID = wxID_HIGHEST + 1006,
    pitchID = wxID_HIGHEST + 1007,
    inputLevelID = wxID_HIGHEST + 1008,
    spdifInID = wxID_HIGHEST + 1009,
    outputLevelID = wxID_HIGHEST + 1010,
    spdifOpticalID = wxID_HIGHEST + 1011,
    spdifProID = wxID_HIGHEST + 1012,
    analogOutID = wxID_HIGHEST + 1013,
    phonesLevelID = wxID_HIGHEST + 1014,
    singleSpeedWclkID = wxID_HIGHEST + 1015,
    tmsID = wxID_HIGHEST + 1016,
  };
  // end wxGlade

  AioProPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=0);

private:

protected:
  // begin wxGlade: AioProPanel::attributes
  wxStaticText* clockSourceLabel;
  wxStaticText* sampleRateLabel;
  wxStaticText* bufferSizeLabel;
  wxStaticText* fwVersionLabel;
  wxRadioButton* masterButton;
  wxStaticText* internalFreqLabel;
  wxChoice* internalFreqChoice;
  wxStaticBitmap* internalWarn;
  wxRadioButton* wclkSyncButton;
  wxStaticText* wclkStatusLabel;
  wxStaticText* wclkFreqLabel;
  wxStaticBitmap* wclkWarn;
  wxRadioButton* aesSyncButton;
  wxStaticText* aesStatusLabel;
  wxStaticText* aesFreqLabel;
  wxStaticBitmap* aesWarn;
  wxRadioButton* spdifSyncButton;
  wxStaticText* spdifStatusLabel;
  wxStaticText* spdifFreqLabel;
  wxStaticBitmap* spdifWarn;
  wxRadioButton* adatSyncButton;
  wxStaticText* adatStatusLabel;
  wxStaticText* adatFreqLabel;
  wxStaticBitmap* adatWarn;
  wxRadioButton* tcoSyncButton;
  wxStaticText* tcoStatusLabel;
  wxStaticText* tcoFreqLabel;
  wxStaticBitmap* tcoWarn;
  wxRadioButton* syncInSyncButton;
  wxStaticText* syncInStatusLabel;
  wxStaticText* syncInFreqLabel;
  wxStaticBitmap* syncInWarn;
  wxSlider* pitchSlider;
  wxRadioBox* inputLevelBox;
  wxRadioBox* spdifInBox;
  wxRadioBox* outputLevelBox;
  wxCheckBox* spdifOpticalButton;
  wxCheckBox* spdifProButton;
  wxRadioBox* analogOutBox;
  wxRadioBox* phonesLevelBox;
  wxCheckBox* singleSpeedWclkButton;
  wxCheckBox* tmsButton;
  // end wxGlade

  DECLARE_EVENT_TABLE();

public:
  virtual void masterCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void internalFreqCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void wclkSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void aesSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void spdifSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void adatSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void tcoSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void syncInSyncCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void pitchDownCB(wxScrollEvent &event); // wxGlade: <event_handler>
  virtual void pitchUpCB(wxScrollEvent &event); // wxGlade: <event_handler>
  virtual void pitchPrevCB(wxScrollEvent &event); // wxGlade: <event_handler>
  virtual void pitchNextCB(wxScrollEvent &event); // wxGlade: <event_handler>
  virtual void pitchSliderCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void inputLevelCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void spdifInCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void outputLevelCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void spdifOpticalCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void spdifProfessionalCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void analogOutCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void phonesLevelCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void singleSpeedWclkOutCB(wxCommandEvent &event); // wxGlade: <event_handler>
  virtual void tmsCB(wxCommandEvent &event); // wxGlade: <event_handler>
}; // wxGlade: end class


#endif // AIOPROPANEL_H