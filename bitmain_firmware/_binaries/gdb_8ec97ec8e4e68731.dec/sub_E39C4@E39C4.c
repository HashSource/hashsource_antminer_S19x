int __fastcall sub_E39C4(int result)
{
  _DWORD *v1; // r4
  int v2; // r6
  int v3; // r6
  const char *v4; // r7
  const char *v5; // r0
  int v6; // r1
  int v7; // r2
  void *v8; // r9
  int v9; // r0
  int v10; // r10
  int v11; // r11
  unsigned int v12; // r3
  unsigned int v13; // r2
  bool v14; // zf
  int v15; // r2
  int v16; // r3
  char *v17; // r0
  int v18; // r5
  char *v19; // r2
  _DWORD *v20; // [sp+8h] [bp-44h]
  int v21; // [sp+Ch] [bp-40h]
  _DWORD *v22; // [sp+10h] [bp-3Ch]
  char *v23; // [sp+18h] [bp-34h]
  int v24; // [sp+1Ch] [bp-30h]
  int v25; // [sp+28h] [bp-24h]
  int v26; // [sp+2Ch] [bp-20h]
  int v27; // [sp+30h] [bp-1Ch]
  int v28; // [sp+34h] [bp-18h] BYREF
  _DWORD *v29; // [sp+38h] [bp-14h]

  v1 = (_DWORD *)result;
  if ( dword_487D4C )
  {
    v3 = *(_DWORD *)sub_242FC8(result);
    v4 = (const char *)sub_240128(v1);
    v5 = (const char *)sub_23095C(v1[2], v1[3], v1[4]);
    result = sub_2594B0(v3, "[btrace] fetch thread %s (%s)\n", v4, v5);
  }
  v2 = v1[63];
  if ( v2 && !v1[77] )
  {
    v25 = dword_4878EC;
    v26 = dword_4878F0;
    v27 = dword_4878F4;
    v6 = v1[3];
    v7 = v1[4];
    dword_4878EC = v1[2];
    dword_4878F0 = v6;
    dword_4878F4 = v7;
    if ( sub_23F828(v1[2], v1[3], v1[4]) )
    {
      sub_91CEC(&v28);
      v8 = sub_9253C((int)&loc_E082C, (int)&v28);
      if ( v1[69] == v1[70] )
        goto LABEL_16;
      if ( sub_2325F0(&v28, v2, 2) )
      {
LABEL_14:
        if ( sub_2325F0(&v28, v2, 1) )
          goto LABEL_15;
        if ( !sub_91D60(&v28) )
          goto LABEL_23;
LABEL_17:
        if ( !sub_91D60(&v28) )
        {
          ((void (__fastcall *)(_DWORD *, int *))loc_91DE0)(v1 + 64, &v28);
          if ( v1[64] == 1 )
          {
            v1[79] = 0;
            v1[80] = 0;
          }
          sub_E05A0(v1 + 63);
          sub_E2D4C(v1, &v28);
        }
        sub_92620(v8);
        dword_4878EC = v25;
        dword_4878F0 = v26;
        dword_4878F4 = v27;
        return v25;
      }
      v9 = sub_91D60(&v28);
      if ( v9 )
        goto LABEL_17;
      if ( v28 != 1 )
      {
        if ( !v28 )
          goto LABEL_17;
        if ( v28 == 2 )
        {
LABEL_15:
          sub_E1378((int)v1);
LABEL_16:
          if ( sub_2325F0(&v28, v2, 0) )
            sub_946E0("Failed to read branch trace.");
          goto LABEL_17;
        }
        sub_94700((int)"btrace.c", 1782, "Unkown branch trace format.");
        goto LABEL_14;
      }
      v10 = v1[70];
      if ( v1[69] == v10 )
      {
LABEL_53:
        sub_94700(
          (int)"btrace.c",
          1681,
          "%s: Assertion `%s' failed.",
          "int btrace_stitch_bts(btrace_data_bts*, thread_info*)",
          "!btinfo->functions.empty ()");
        dword_4878EC = v25;
        dword_4878F0 = v26;
        dword_4878F4 = v27;
        sub_338FFC(v25);
      }
      v20 = v29;
      if ( !v29 || (v11 = *v29) == 0 )
      {
LABEL_52:
        sub_94700(
          (int)"btrace.c",
          1682,
          "%s: Assertion `%s' failed.",
          "int btrace_stitch_bts(btrace_data_bts*, thread_info*)",
          "!VEC_empty (btrace_block_s, btrace->blocks)");
        goto LABEL_53;
      }
      v21 = *(_DWORD *)(v10 - 28);
      if ( *(_DWORD *)(v10 - 32) == v21 )
      {
        *v29 = v11 - 1;
        goto LABEL_17;
      }
      v22 = &v29[2 * v11];
      v12 = *(_DWORD *)(v21 - 16);
      v13 = v22[1];
      v14 = v13 == v12;
      if ( v13 == v12 )
        v14 = v11 == 1;
      if ( v14 )
      {
        *v29 = 0;
        goto LABEL_17;
      }
      if ( dword_487D4C )
      {
        v24 = *(_DWORD *)sub_242FC8(0);
        if ( v21 == 16 )
          v23 = "<nil>";
        else
          v23 = sub_98E84(*(_DWORD *)(v21 - 16));
        v17 = sub_98E84(v22[1]);
        v9 = sub_2594B0(v24, "[btrace] stitching %s to %s\n", v23, v17);
        v13 = v22[1];
        v12 = *(_DWORD *)(v21 - 16);
      }
      if ( v12 > v13 )
      {
        sub_946B0("Error while trying to read delta trace.  Falling back to a full read.");
        goto LABEL_15;
      }
      if ( !v20[2 * v11] )
      {
        v14 = dword_487D4C == 0;
        v20[2 * v11] = v12;
        if ( !v14 )
        {
          v18 = *(_DWORD *)sub_242FC8(v9);
          if ( v21 == 16 )
            v19 = "<nil>";
          else
            v19 = sub_98E84(*(_DWORD *)(v21 - 16));
          sub_2594B0(v18, "[btrace] pruning insn at %s for stitching\n", v19);
        }
        v15 = *(_DWORD *)(v10 - 12);
        v16 = *(_DWORD *)(v10 - 28) - 16;
        *(_DWORD *)(v10 - 28) = v16;
        if ( v15 != 1 || *(_DWORD *)(v10 - 32) != v16 )
          goto LABEL_17;
LABEL_23:
        sub_E1378((int)v1);
        goto LABEL_17;
      }
    }
    else
    {
      sub_94700(
        (int)"btrace.c",
        1907,
        "%s: Assertion `%s' failed.",
        "void btrace_fetch(thread_info*)",
        "can_access_registers_ptid (tp->ptid)");
    }
    sub_94700(
      (int)"btrace.c",
      1729,
      "%s: Assertion `%s' failed.",
      "int btrace_stitch_bts(btrace_data_bts*, thread_info*)",
      "first_new_block->begin == 0");
    goto LABEL_52;
  }
  return result;
}
