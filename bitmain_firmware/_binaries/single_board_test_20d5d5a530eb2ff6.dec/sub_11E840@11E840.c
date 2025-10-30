int __fastcall sub_11E840(int a1, int a2, _DWORD *a3)
{
  int v6; // r8
  signed int i; // r5
  int v8; // r3
  int **v9; // r7
  _DWORD *v10; // r0
  int v11; // r4
  int *v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r4
  int v16; // r3
  _BYTE v18[4]; // [sp+14h] [bp-10h] BYREF
  int v19; // [sp+18h] [bp-Ch]
  int v20; // [sp+1Ch] [bp-8h]

  v6 = sub_11E818();
  if ( v6 )
  {
    for ( i = 0; i < sub_10C010((int)a3); ++i )
    {
      v13 = sub_10C01C(a3, i);
      v14 = *(_DWORD *)(v13 + 4);
      v15 = v13;
      if ( !strncmp((const char *)v14, "permitted", 9u) && *(_BYTE *)(v14 + 9) )
      {
        v8 = v14 + 10;
        v9 = (int **)v6;
        v19 = v8;
        v20 = *(_DWORD *)(v15 + 8);
        v10 = (_DWORD *)sub_11E7F0();
        v11 = (int)v10;
        if ( !v10 )
          goto LABEL_14;
      }
      else
      {
        if ( strncmp((const char *)v14, "excluded", 8u) || !*(_BYTE *)(v14 + 8) )
        {
          v11 = 0;
          sub_D0048(34, 147, 143, (int)"crypto/x509v3/v3_ncons.c", 142);
          goto LABEL_16;
        }
        v16 = v14 + 9;
        v9 = (int **)(v6 + 4);
        v19 = v16;
        v20 = *(_DWORD *)(v15 + 8);
        v10 = (_DWORD *)sub_11E7F0();
        v11 = (int)v10;
        if ( !v10 )
          goto LABEL_14;
      }
      if ( !sub_17018C(*v10, a1, a2, v18, 1) )
        goto LABEL_16;
      v12 = *v9;
      if ( !*v9 )
      {
        v12 = (int *)sub_10BFCC();
        *v9 = v12;
        if ( !v12 )
          goto LABEL_15;
      }
      if ( !sub_10BD3C(v12, v11) )
        goto LABEL_15;
    }
    return v6;
  }
  else
  {
LABEL_14:
    v11 = 0;
LABEL_15:
    sub_D0048(34, 147, 65, (int)"crypto/x509v3/v3_ncons.c", 161);
LABEL_16:
    sub_11E82C(v6);
    sub_11E804(v11);
    return 0;
  }
}
