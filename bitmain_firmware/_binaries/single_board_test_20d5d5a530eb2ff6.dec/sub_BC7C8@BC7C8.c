int __fastcall sub_BC7C8(int *a1, unsigned __int8 **a2, unsigned int a3)
{
  int v6; // r4
  unsigned __int8 *v7; // r0
  int v8; // r5
  unsigned int v9; // r10
  int v10; // r0
  unsigned __int8 *v11; // lr
  __int64 v12; // r6
  int v13; // r2
  unsigned __int64 v14; // r0
  unsigned __int8 *v15; // r12
  unsigned __int64 v16; // r6
  unsigned int v17; // r5
  unsigned int v18; // r10
  int v19; // r0
  int result; // r0
  int v21; // r0
  int v22; // r0
  unsigned __int8 *v23; // r3
  int v24; // r2
  unsigned __int8 *v25; // [sp+1Ch] [bp-8h] BYREF

  if ( a3 - 1 > 0xFFFE )
  {
    sub_D0048(50, 110, 104, "crypto/ct/ct_oct.c", 76);
    SCT_free(0);
    return 0;
  }
  v6 = sub_BCFD8();
  if ( !v6 )
    goto LABEL_19;
  v7 = *a2;
  v25 = v7;
  v8 = *v7;
  *(_DWORD *)v6 = v8;
  if ( !v8 )
  {
    if ( a3 <= 0x2A )
    {
      v24 = 99;
    }
    else
    {
      v25 = v7 + 1;
      v9 = a3 - 43;
      v10 = sub_E9E68(v7 + 1, 32, "crypto/ct/ct_oct.c", 104);
      *(_DWORD *)(v6 + 12) = v10;
      if ( !v10 )
        goto LABEL_19;
      v11 = v25;
      *(_DWORD *)(v6 + 16) = 32;
      LODWORD(v12) = 0;
      v13 = v11[32];
      LODWORD(v14) = 0;
      v15 = v11 + 42;
      v25 = v11 + 42;
      HIDWORD(v12) = v13 << 24;
      *(_QWORD *)(v6 + 24) = v12;
      HIDWORD(v14) = (v11[33] << 16) | (v13 << 24);
      *(_QWORD *)(v6 + 24) = v14;
      LODWORD(v14) = 0;
      HIDWORD(v14) |= v11[34] << 8;
      *(_QWORD *)(v6 + 24) = v14;
      LODWORD(v14) = 0;
      HIDWORD(v14) |= v11[35];
      *(_QWORD *)(v6 + 24) = v14;
      LODWORD(v14) = v11[36] << 24;
      *(_QWORD *)(v6 + 24) = v14;
      LODWORD(v14) = (v11[37] << 16) | v14;
      *(_QWORD *)(v6 + 24) = v14;
      v16 = (v11[38] << 8) | v14;
      *(_QWORD *)(v6 + 24) = v16;
      LODWORD(v16) = v16 | v11[39];
      *(_QWORD *)(v6 + 24) = v16;
      v17 = v11[41] | (v11[40] << 8);
      if ( v9 >= v17 )
      {
        if ( !v17 )
        {
LABEL_8:
          v18 = v9 - v17;
          v25 = &v15[v17];
          *(_DWORD *)(v6 + 36) = v17;
          v19 = sub_BC710(v6, &v25, v18);
          if ( v19 > 0 )
          {
            *a2 = &v25[v18 - v19];
            goto LABEL_10;
          }
          v24 = 128;
          goto LABEL_18;
        }
        v21 = sub_E9E68(v11 + 42, v17, "crypto/ct/ct_oct.c", 118);
        *(_DWORD *)(v6 + 32) = v21;
        if ( v21 )
        {
          v15 = v25;
          goto LABEL_8;
        }
LABEL_19:
        SCT_free(v6);
        return 0;
      }
      v24 = 114;
    }
LABEL_18:
    sub_D0048(50, 110, 104, "crypto/ct/ct_oct.c", v24);
    goto LABEL_19;
  }
  v22 = sub_E9E68(v7, a3, "crypto/ct/ct_oct.c", 135);
  *(_DWORD *)(v6 + 4) = v22;
  if ( !v22 )
    goto LABEL_19;
  v23 = v25;
  *(_DWORD *)(v6 + 8) = a3;
  *a2 = &v23[a3];
LABEL_10:
  result = v6;
  if ( a1 )
  {
    SCT_free(*a1);
    result = v6;
    *a1 = v6;
  }
  return result;
}
