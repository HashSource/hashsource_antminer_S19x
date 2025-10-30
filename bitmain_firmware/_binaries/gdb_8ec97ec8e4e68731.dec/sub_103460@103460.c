int __fastcall sub_103460(int a1, int a2)
{
  FILE **v3; // r7
  int v6; // [sp+4h] [bp-8h] BYREF

  v3 = (FILE **)(a1 + 4);
  sub_10270C((FILE **)(a1 + 4), (const char *)&word_356638);
  sub_10270C(
    v3,
    "event {\n"
    "\tname = \"status\";\n"
    "\tid = %u;\n"
    "\tfields := struct { \n"
    "\t\tint32_t stop_reason;\n"
    "\t\tint32_t stopping_tracepoint;\n"
    "\t\tint32_t traceframe_count;\n"
    "\t\tint32_t traceframes_created;\n"
    "\t\tint32_t buffer_free;\n"
    "\t\tint32_t buffer_size;\n"
    "\t\tint32_t disconnected_tracing;\n"
    "\t\tint32_t circular_buffer;\n"
    "\t};\n"
    "};\n",
    4);
  v6 = 4;
  sub_102E30((int)v3, &v6, 4u, 4);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 12), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 16), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 24), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 28), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 36), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 32), 4u);
  sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 40), 4u);
  return sub_102D0C(*(FILE **)(a1 + 8), (_DWORD *)(a1 + 12), (void *)(a2 + 44), 4u);
}
