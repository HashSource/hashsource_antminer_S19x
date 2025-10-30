int __fastcall sub_10BBCC(int *a1, int a2, int a3, char a4)
{
  int v8; // r9
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r4
  int v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r3
  _BYTE *v22; // r1
  _BYTE *v23; // r0
  int v24; // r0
  _DWORD *v25; // r5
  int v26; // r0
  unsigned int v27; // r10
  int v28; // r11
  const char *v29; // r7
  int v30; // r2
  int v31; // r3
  int v32; // r2
  int v33; // r3
  int v35; // r2
  int v36; // r3
  int v37; // r2
  int v38; // r3
  int v39; // r0
  int v40; // r2
  int v41; // r3
  _DWORD *v42; // [sp+14h] [bp-20h]
  unsigned __int8 v43; // [sp+1Bh] [bp-19h] BYREF
  _BYTE v44[4]; // [sp+1Ch] [bp-18h] BYREF
  int v45; // [sp+20h] [bp-14h] BYREF
  _BYTE v46[4]; // [sp+24h] [bp-10h] BYREF
  void *ptr; // [sp+28h] [bp-Ch] BYREF
  void *v48; // [sp+2Ch] [bp-8h] BYREF

  v8 = *a1;
  ptr = 0;
  v48 = 0;
  sub_2578AC(a2, 0);
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_DWORD *)a3;
  if ( v10 )
  {
    sub_257694(a2, "insn-number", "%u", v10);
    sub_257380(a2, "\t", v35, v36);
  }
  if ( (a4 & 0x40) != 0 )
  {
    v12 = *(unsigned __int8 *)(a3 + 8);
    if ( (v12 & 1) != 0 )
    {
      sub_2575E8(a2, "is-speculative", "?");
      if ( (a4 & 0x10) != 0 )
      {
        sub_257380(a2, "  ", v37, v38);
      }
      else
      {
        v39 = sub_1C73B0(v11);
        sub_257380(a2, v39 + 1, v40, v41);
      }
    }
    else
    {
      if ( (a4 & 0x10) == 0 )
      {
LABEL_6:
        v13 = sub_1C73B0(v11);
        sub_257380(a2, v13, v14, v15);
        goto LABEL_7;
      }
      sub_257380(a2, "   ", v9, v12);
    }
  }
  else if ( (a4 & 0x10) == 0 )
  {
    goto LABEL_6;
  }
LABEL_7:
  sub_257630(a2, "address", v8, v11);
  if ( sub_1C6ECC(v8, v11, 0, &v48, &v45, &ptr, v46, v44) )
  {
    sub_257380(a2, ":\t", v16, v17);
  }
  else
  {
    sub_257380(a2, " <", v16, v17);
    if ( (a4 & 4) == 0 )
      sub_2575E8(a2, "func-name", v48);
    sub_257380(a2, "+", v18, v19);
    sub_257504(a2, "offset", v45);
    sub_257380(a2, ">:\t", v20, v21);
  }
  if ( ptr )
    free(ptr);
  if ( v48 )
    free(v48);
  v22 = (_BYTE *)a1[41];
  a1[42] = 0;
  v42 = a1 + 40;
  *v22 = 0;
  if ( (a4 & 2) != 0 )
  {
    v23 = (_BYTE *)a1[48];
    a1[49] = 0;
    *v23 = 0;
    v24 = (int)a1;
    v25 = a1 + 47;
    v26 = sub_10BB74(v24, v11, 0);
    v27 = v26 + v11;
    v28 = v26;
    if ( v11 < v26 + v11 )
    {
      v29 = "";
      do
      {
        sub_FA86C(v11, (int)&v43, 1);
        sub_25678C(v25, "%s%02x", v29, v43);
        ++v11;
        v29 = (const char *)&word_3E1F84;
      }
      while ( v27 != v11 );
    }
    sub_25765C(a2, "opcodes", v25);
    sub_257380(a2, "\t", v30, v31);
  }
  else
  {
    v28 = sub_10BB74((int)a1, v11, (_DWORD *)(a4 & 2));
  }
  sub_25765C(a2, "inst", v42);
  sub_25734C(a2, 0);
  sub_257380(a2, &word_356638, v32, v33);
  return v28;
}
