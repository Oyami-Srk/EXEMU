// EXEMU.cpp : 定义应用程序的入口点。
//
#include <stdio.h>
#include <stdarg.h>

#include "framework.h"
#include "EXEMU.h"
#include "EX_EMU.h"



constexpr auto MAX_LOADSTRING = 100;
constexpr auto MAX_LOG_SIZE = 1048576 * 4;
constexpr auto L_width = 600;
constexpr auto SCREEN_SCALE = 2;


char *log_buffer;
unsigned int log_ptr;

int vram[256][128];

void log(char *text) {
  printf("[log] %s\n", text);
}

void clr_reg_dump_text() {
}

void put_reg_dump_text(char *text) {
  printf("[regdump] %s\n", text);
}

void uart_output(char *text) {
  printf("[uart] %s\n", text);
}

void uart_putc(char c) {
    printf("[uart char] %c\n", c);
}


void log(const char text[]) {
    log((char *)text);
}


int log_f(const char* f, ...) {
    va_list ap;
    int ret;
    char str_buf[1024];
    va_start(ap, f);
    ret = vsprintf(str_buf, f, ap);
    log(str_buf);
    va_end(ap);
    return ret;
}

int reg_dump_log_f(const char* f, ...) {
    va_list ap;
    int ret;
    char str_buf[1024];
    va_start(ap, f);
    ret = vsprintf(str_buf, f, ap);
    put_reg_dump_text(str_buf);
    va_end(ap);
    return ret;
}

void screen_point(int x, int y, int c) {
}

void screen_flush() {
}

void clear_screen() {
}

int main(void) {
  emu_start();
  return 0;
}