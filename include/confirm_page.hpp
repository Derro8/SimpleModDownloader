#pragma once

#include <borealis.hpp>

class ConfirmPage : public brls::View {
private:
    brls::Button* button;
    brls::Label* label;
    brls::StagedAppletFrame* frame;
    std::string text;
public:
    ConfirmPage(brls::StagedAppletFrame* frame, const std::string& text, brls::View *return_view, const bool& restart = false);
    ~ConfirmPage();
    void draw(NVGcontext* vg, int x, int y, unsigned width, unsigned height, brls::Style* style, brls::FrameContext* ctx) override;
    void layout(NVGcontext* vg, brls::Style* style, brls::FontStash* stash) override;
    brls::View* getDefaultFocus() override;
};