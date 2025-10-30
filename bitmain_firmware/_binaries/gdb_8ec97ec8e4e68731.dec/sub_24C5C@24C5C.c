unsigned int __fastcall sub_24C5C(int a1, unsigned int a2)
{
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r6
  int v8; // r9
  int v9; // r10
  int v10; // r8
  unsigned __int16 v11; // r0
  const char *v12; // r5
  int v13; // r0
  unsigned int v14; // r11
  unsigned int v15; // r0
  int v16; // r1
  int v17; // r11
  int v18; // r8
  int v19; // r8
  unsigned __int16 v20; // r0
  __int16 v21; // r0
  unsigned int v22; // r0
  unsigned __int16 v23; // r11
  unsigned __int16 v24; // r0
  int v25; // r2
  int v26; // r8
  unsigned __int16 v27; // r0
  int v28; // r1
  int v29; // r0
  int v30; // r2
  unsigned int v31; // r0
  unsigned __int16 v32; // r10
  int v33; // r0
  char v34; // [sp+4h] [bp-18h]
  unsigned __int16 v35; // [sp+4h] [bp-18h]
  unsigned int v36; // [sp+Ch] [bp-10h] BYREF
  const char **v37; // [sp+10h] [bp-Ch] BYREF

  if ( sub_C37B8(a2, 0, &v36, 0) )
  {
    v4 = ((int (__fastcall *)(int, unsigned int))loc_21EDCC)(a1, v36);
    v5 = sub_21DDAC(v36);
    if ( v4 )
    {
      v8 = ((int (__fastcall *)(int))loc_165C28)(a1);
      v9 = sub_2484C(a1, v4);
      v10 = ((int (__fastcall *)(int))loc_165C28)(a1);
      if ( sub_2484C(a1, v4) )
      {
        v11 = sub_FA9D4(v4, 2, v10);
        if ( (v11 & 0xF800) == 0x4800 )
        {
          v30 = v10;
          v17 = HIBYTE(v11) & 7;
          v18 = 2;
          v16 = sub_FA95C((v4 & 0xFFFFFFFC) + 4 + ((4 * v11) & 0x3FC), 4, v30);
        }
        else
        {
          if ( (v11 & 0xFBF0) != 0xF240 )
            goto LABEL_12;
          v35 = v11;
          v23 = sub_FA9D4(v4 + 2, 2, v10);
          v24 = sub_FA9D4(v4 + 4, 2, v10);
          v25 = v10;
          v26 = v24;
          v27 = sub_FA9D4(v4 + 6, 2, v25);
          if ( (v26 & 0xFFFFFBC0) != 0xF2C0 )
            goto LABEL_12;
          v28 = (2 * v35) & 0x800 | (unsigned __int16)(v35 << 12) | (unsigned __int8)v23 | (v23 >> 4) & 0x700;
          v17 = HIBYTE(v27) & 0xF;
          v16 = v28
              | (((unsigned __int16)((_WORD)v26 << 12)
                | (unsigned __int8)v27
                | (2 * (_WORD)v26) & 0x800
                | (v27 >> 4) & 0x700) << 16);
          v18 = 8;
        }
      }
      else
      {
        v13 = sub_FA9D4(v4, 4, v10);
        v14 = v13;
        if ( (v13 & 0xE5F0000) == 0x41F0000 )
        {
          v17 = (unsigned __int16)v13 >> 12;
          v29 = sub_FA95C(v4 + 8 + (v13 & 0xFFF), 4, v10);
          v18 = 4;
          v16 = v29;
        }
        else
        {
          if ( (v13 & 0xFF00000) != 0x3000000 )
            goto LABEL_12;
          v15 = sub_FA9D4(v4 + 4, 4, v10);
          if ( (v15 & 0xFF00000) != 0x3400000 )
            goto LABEL_12;
          v16 = (v14 >> 4) & 0xF000 | v14 & 0xFFF | (((v15 >> 4) & 0xF000 | v15 & 0xFFF) << 16);
          v17 = (unsigned __int16)v15 >> 12;
          v18 = 8;
        }
      }
      if ( v16 )
      {
        sub_1B240C(&v37, v16);
        if ( v37 )
        {
          if ( !strncmp(*v37, "__stack_chk_guard", 0x11u) )
          {
            v19 = v18 + v4;
            if ( v9 )
            {
              v20 = sub_FA9D4(v19, 2, v8);
              if ( (v20 & 0xF800) != 0x6800 )
                goto LABEL_12;
              if ( ((v20 >> 3) & 7) != v17 )
                goto LABEL_12;
              v34 = v20;
              v21 = sub_FA9D4(v19 + 2, 2, v8);
              if ( (v21 & 0xF800) != 0x6000 || (v34 & 7) != (v21 & 7) )
                goto LABEL_12;
              v4 = v19 + 4;
            }
            else
            {
              v31 = sub_FA9D4(v19, 4, v8);
              v32 = v31;
              if ( (v31 & 0xE500000) != 0x4100000 )
                goto LABEL_12;
              if ( (HIWORD(v31) & 0xF) != v17 )
                goto LABEL_12;
              v33 = sub_FA9D4(v19 + 4, 4, v8);
              if ( (v33 & 0xE500000) != 0x4000000 || v32 >> 12 != (unsigned __int16)v33 >> 12 )
                goto LABEL_12;
              v4 = v19 + 8;
            }
            if ( !v4 )
              goto LABEL_3;
          }
        }
      }
LABEL_12:
      if ( v5 )
      {
        v12 = *(const char **)(v5 + 24);
        if ( v12 )
        {
          if ( strncmp(*(const char **)(v5 + 24), "GNU ", 4u) && strncmp(v12, "clang ", 6u) )
          {
            v22 = sub_2484C(a1, v36) ? sub_21DC0(a1, v36, v4, 0) : sub_22ECC(a1, v36, v4, 0);
            if ( v22 != v4 )
              return v36;
          }
        }
      }
      return v4;
    }
  }
LABEL_3:
  v6 = ((int (__fastcall *)(int, unsigned int))loc_21EDCC)(a1, a2);
  if ( !v6 )
    v6 = a2 + 64;
  if ( sub_2484C(a1, a2) )
    return sub_21DC0(a1, a2, v6, 0);
  return sub_22ECC(a1, a2, v6, 0);
}
