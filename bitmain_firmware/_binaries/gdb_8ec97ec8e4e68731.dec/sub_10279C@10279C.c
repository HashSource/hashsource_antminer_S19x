int __fastcall sub_10279C(int a1)
{
  int v1; // r6
  int v2; // r7
  FILE **v3; // r4
  __int64 v6; // r0
  int v7; // lr
  __int64 v8; // r6
  int v9; // r0
  int v10; // r0
  _BYTE *v11; // r3
  int v12; // r2
  int v13; // r0
  const char *v14; // r5
  int *v15; // r0
  const char *v16; // r5
  char *v17; // r0
  int *v18; // r0
  char *v19; // r0
  char *v20; // r0
  void *v21; // [sp+8h] [bp-54h] BYREF
  int v22; // [sp+Ch] [bp-50h]
  _DWORD v23[4]; // [sp+10h] [bp-4Ch] BYREF
  void *ptr; // [sp+20h] [bp-3Ch] BYREF
  int v25; // [sp+24h] [bp-38h]
  _DWORD v26[9]; // [sp+28h] [bp-34h] BYREF
  int v27; // [sp+4Ch] [bp-10h]

  v3 = (FILE **)(a1 + 4);
  sub_10270C((FILE **)(a1 + 4), (const char *)&word_356638);
  sub_10270C(
    v3,
    "event {\n"
    "\tname = \"memory\";\n"
    "\tid = %u;\n"
    "\tfields := struct { \n"
    "\t\tuint64_t address;\n"
    "\t\tuint16_t length;\n"
    "\t\tuint8_t contents[length];\n"
    "\t};\n"
    "};\n",
    2);
  sub_10270C(v3, (const char *)&word_356638);
  sub_10270C(
    v3,
    "event {\n\tname = \"tsv\";\n\tid = %u;\n\tfields := struct { \n\t\tuint64_t val;\n\t\tuint32_t num;\n\t};\n};\n",
    1);
  sub_10270C(v3, (const char *)&word_356638);
  sub_10270C(v3, "event {\n\tname = \"frame\";\n\tid = %u;\n\tfields := struct { \n\t};\n};\n", 3);
  sub_10270C(v3, (const char *)&word_356638);
  sub_10270C(
    v3,
    "event {\n"
    "\tname = \"tsv_def\";\n"
    "\tid = %u;\n"
    "\tfields := struct { \n"
    "\t\tint64_t initial_value;\n"
    "\t\tint32_t number;\n"
    "\t\tint32_t builtin;\n"
    "\t\tchars name;\n"
    "\t};\n"
    "};\n",
    5);
  sub_10270C(v3, (const char *)&word_356638);
  sub_10270C(
    v3,
    "event {\n"
    "\tname = \"tp_def\";\n"
    "\tid = %u;\n"
    "\tfields := struct { \n"
    "\t\tuint64_t addr;\n"
    "\t\tuint64_t traceframe_usage;\n"
    "\t\tint32_t number;\n"
    "\t\tint32_t enabled;\n"
    "\t\tint32_t step;\n"
    "\t\tint32_t pass;\n"
    "\t\tint32_t hit_count;\n"
    "\t\tint32_t type;\n"
    "\t\tchars cond;\n"
    "\t\tuint32_t action_num;\n"
    "\t\tchars actions[action_num];\n"
    "\t\tuint32_t step_action_num;\n"
    "\t\tchars step_actions[step_action_num];\n"
    "\t\tchars at_string;\n"
    "\t\tchars cond_string;\n"
    "\t\tuint32_t cmd_num;\n"
    "\t\tchars cmd_strings[cmd_num];\n"
    "\t};\n"
    "};\n",
    6);
  if ( *(_DWORD *)(a1 + 12) )
  {
    sub_94700(
      (int)"ctf.c",
      417,
      "%s: Assertion `%s' failed.",
      "void ctf_write_header(trace_file_writer*)",
      "writer->tcs.content_size == 0");
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 16) )
  {
LABEL_5:
    v6 = sub_94700(
           (int)"ctf.c",
           418,
           "%s: Assertion `%s' failed.",
           "void ctf_write_header(trace_file_writer*)",
           "writer->tcs.packet_start == 0");
    v26[5] = v3;
    v26[6] = a1;
    v26[7] = v1;
    v26[8] = v2;
    v27 = v7;
    v8 = v6;
    if ( mkdir((const char *)HIDWORD(v6), 0x1ECu) )
    {
      v9 = *_errno_location();
      if ( v9 != 17 )
      {
        v20 = sub_6FF98(v9);
        sub_946E0("Unable to open directory '%s' for saving trace data (%s)", (const char *)HIDWORD(v8), v20);
      }
    }
    *(_DWORD *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 8) = 0;
    *(_DWORD *)(v8 + 12) = 0;
    *(_DWORD *)(v8 + 16) = 0;
    sub_931D8((char **)&v21, "%s/%s", (const char *)HIDWORD(v8), "metadata");
    v10 = fopen64(v21, "w");
    *(_DWORD *)(v8 + 4) = v10;
    if ( !v10 )
    {
      v15 = _errno_location();
      v16 = (const char *)v21;
      v17 = sub_6FF98(*v15);
      sub_946E0("Unable to open file '%s' for saving trace data (%s)", v16, v17);
    }
    sub_10270C((FILE **)(v8 + 4), "/* CTF %d.%d */\n", 1, 8);
    sub_10270C(
      (FILE **)(v8 + 4),
      "typealias integer { size = 8; align = 8; signed = false; encoding = ascii;} := ascii;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias integer { size = 8; align = 8; signed = false; } := uint8_t;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias integer { size = 16; align = 16;signed = false; } := uint16_t;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias integer { size = 32; align = 32;signed = false; } := uint32_t;\n");
    sub_10270C(
      (FILE **)(v8 + 4),
      "typealias integer { size = 64; align = 64;signed = false; base = hex;} := uint64_t;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias integer { size = 32; align = 32;signed = true; } := int32_t;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias integer { size = 64; align = 64;signed = true; } := int64_t;\n");
    sub_10270C((FILE **)(v8 + 4), "typealias string { encoding = ascii; } := chars;\n");
    sub_10270C((FILE **)(v8 + 4), (const char *)&word_356638);
    sub_10270C(
      (FILE **)(v8 + 4),
      "\n"
      "trace {\n"
      "\tmajor = %u;\n"
      "\tminor = %u;\n"
      "\tbyte_order = %s;\n"
      "\tpacket.header := struct {\n"
      "\t\tuint32_t magic;\n"
      "\t};\n"
      "};\n"
      "\n"
      "stream {\n"
      "\tpacket.context := struct {\n"
      "\t\tuint32_t content_size;\n"
      "\t\tuint32_t packet_size;\n"
      "\t\tuint16_t tpnum;\n"
      "\t};\n"
      "\tevent.header := struct {\n"
      "\t\tuint32_t id;\n"
      "\t};\n"
      "};\n",
      1,
      8,
      "le");
    sub_10270C((FILE **)(v8 + 4), (const char *)&word_356638);
    sub_931D8((char **)&ptr, "%s/%s", (const char *)HIDWORD(v8), "datastream");
    v11 = v21;
    if ( ptr == v26 )
    {
      sub_33B48C(&v21, &ptr);
      v11 = ptr;
    }
    else
    {
      if ( v21 == v23 )
      {
        v21 = ptr;
        v22 = v25;
        v23[0] = v26[0];
      }
      else
      {
        v21 = ptr;
        v22 = v25;
        v12 = v23[0];
        v23[0] = v26[0];
        if ( v11 )
        {
          ptr = v11;
          v26[0] = v12;
          goto LABEL_12;
        }
      }
      ptr = v26;
      v11 = v26;
    }
LABEL_12:
    v25 = 0;
    *v11 = 0;
    if ( ptr != v26 )
      sub_339E64(ptr);
    v13 = fopen64(v21, "w");
    *(_DWORD *)(v8 + 8) = v13;
    v14 = (const char *)v21;
    if ( v13 )
    {
      if ( v21 != v23 )
        sub_339E64(v21);
      __asm { POP             {R4-R7,PC} }
    }
    v18 = _errno_location();
    v19 = sub_6FF98(*v18);
    sub_946E0("Unable to open file '%s' for saving trace data (%s)", v14, v19);
  }
  return (**(int (__fastcall ***)(int))(*(_DWORD *)a1 + 44))(a1);
}
