int __fastcall sub_BD8F8(int a1, int *a2)
{
  int v4; // r3
  size_t v5; // r2
  int v6; // r8
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r6
  int v15; // r6
  int v16; // r5
  int v17; // r3
  int v18; // r2
  char v19; // [sp+Ch] [bp-Ch] BYREF
  char v20; // [sp+Dh] [bp-Bh]
  char v21; // [sp+Eh] [bp-Ah]
  char v22; // [sp+Fh] [bp-9h]
  char v23; // [sp+10h] [bp-8h]
  char v24; // [sp+11h] [bp-7h]
  char v25; // [sp+12h] [bp-6h]
  char v26; // [sp+13h] [bp-5h]
  char v27; // [sp+14h] [bp-4h]
  char v28; // [sp+15h] [bp-3h]
  char v29; // [sp+16h] [bp-2h]
  char v30; // [sp+17h] [bp-1h]

  if ( !sub_BD35C(a2) || !*(_DWORD *)a1 || (v4 = a2[13], v4 == -1) || v4 == 1 && !*(_DWORD *)(a1 + 12) )
  {
    sub_D0048(50, 128, 106, "crypto/ct/ct_vfy.c", 104);
    return 0;
  }
  if ( !*a2 )
  {
    v5 = a2[4];
    if ( v5 != *(_DWORD *)(a1 + 8) || (v6 = memcmp((const void *)a2[3], *(const void **)(a1 + 4), v5)) != 0 )
    {
      v6 = 0;
      sub_D0048(50, 128, 114, "crypto/ct/ct_vfy.c", 113);
      return v6;
    }
    if ( *(_QWORD *)(a1 + 40) < *((_QWORD *)a2 + 3) )
    {
      sub_D0048(50, 128, 116, "crypto/ct/ct_vfy.c", 117);
      return v6;
    }
    v7 = sub_D14F4(0);
    v8 = v7;
    if ( !v7 )
      goto LABEL_12;
    v9 = sub_D93F0(v7);
    if ( !sub_D954C(v8, 0, v9, 0, *(_DWORD *)a1) )
      goto LABEL_12;
    v11 = a2[13];
    if ( v11 == -1 || v11 == 1 && !*(_DWORD *)(a1 + 12) )
      goto LABEL_12;
    v12 = a2[6];
    v13 = a2[7];
    v29 = BYTE1(a2[13]);
    v28 = v12;
    v14 = *a2;
    v26 = BYTE2(v12);
    v27 = BYTE1(v12);
    v24 = v13;
    v30 = v11;
    v25 = HIBYTE(v12);
    v21 = HIBYTE(v13);
    v22 = BYTE2(v13);
    v23 = BYTE1(v13);
    v19 = v14;
    v20 = 0;
    if ( !sub_D16D8(v8, &v19, 12) )
      goto LABEL_12;
    if ( a2[13] )
    {
      if ( !sub_D16D8(v8, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 16)) )
        goto LABEL_12;
      v15 = *(_DWORD *)(a1 + 28);
      v16 = *(_DWORD *)(a1 + 32);
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 20);
      v16 = *(_DWORD *)(a1 + 24);
    }
    if ( v15 )
    {
      v21 = v16;
      v19 = BYTE2(v16);
      v20 = BYTE1(v16);
      if ( sub_D16D8(v8, &v19, 3) )
      {
        if ( sub_D16D8(v8, v15, v16) )
        {
          v17 = a2[9];
          v19 = BYTE1(v17);
          v20 = v17;
          if ( sub_D16D8(v8, &v19, 2) )
          {
            v18 = a2[9];
            if ( !v18 || sub_D16D8(v8, a2[8], v18) )
            {
              v6 = sub_D97EC(v8, a2[11], a2[12]);
              if ( !v6 )
                sub_D0048(50, 128, 107, "crypto/ct/ct_vfy.c", 135);
              goto LABEL_13;
            }
          }
        }
      }
    }
LABEL_12:
    v6 = 0;
LABEL_13:
    sub_D1504(v8);
    return v6;
  }
  sub_D0048(50, 128, 115, "crypto/ct/ct_vfy.c", 108);
  return 0;
}
