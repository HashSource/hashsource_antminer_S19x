int __fastcall sub_1715C0(_DWORD *a1, char *s, int **a3)
{
  size_t v5; // r8
  int v6; // r10
  int v7; // r6
  int v8; // r4
  size_t v9; // r7
  int v10; // r10
  char *v12; // r2
  int v13; // r7
  int v14; // r3
  int v15; // t1
  void *v16; // r0
  _DWORD *v17; // r0
  int v18; // [sp+4h] [bp-418h]
  int v20; // [sp+Ch] [bp-410h]
  int *v21; // [sp+10h] [bp-40Ch]
  char *v22; // [sp+14h] [bp-408h]
  char v23[2]; // [sp+18h] [bp-404h] BYREF
  char s1[1026]; // [sp+1Ah] [bp-402h] BYREF

  v5 = strlen(s);
  v21 = (int *)sub_10BFCC();
  *a3 = v21;
  if ( !v21 )
    return 0;
  v6 = 1;
  v7 = 0;
  v18 = 0;
  v20 = 0;
  v22 = "\r\n";
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = sub_B6D58(a1, (int)v23, 1024);
      if ( v8 <= 0 )
      {
        BIO_vfree_0(v18);
        return 0;
      }
      v9 = v5 == -1 ? strlen(s) : v5;
      if ( v8 > (int)(v9 + 1) && !strncmp(v23, "--", 2u) && !strncmp(s1, s, v9) )
        break;
      if ( v7 )
      {
        v12 = &v23[v8];
        v13 = 0;
        do
        {
          while ( 1 )
          {
            v15 = (unsigned __int8)*--v12;
            v14 = v15;
            if ( v15 != 10 )
              break;
            --v8;
            v13 = 1;
            if ( !v8 )
              goto LABEL_19;
          }
          if ( v14 != 13 )
            break;
          --v8;
        }
        while ( v8 );
LABEL_19:
        if ( v6 )
        {
          if ( v18 && !sub_10BD3C(v21, v18) )
          {
            v10 = 0;
            goto LABEL_33;
          }
          v16 = sub_B7E30();
          v17 = sub_B655C((int)v16);
          v18 = (int)v17;
          if ( !v17 )
            return 0;
          sub_B6ECC((int)v17, 130, 0, 0);
LABEL_24:
          if ( !v8 )
            goto LABEL_25;
LABEL_29:
          v6 = 0;
          v20 = v13;
          sub_B69CC(v18, (int)v23, v8);
        }
        else
        {
          if ( !v20 )
            goto LABEL_24;
          sub_B69CC(v18, (int)v22, 2);
          if ( v8 )
            goto LABEL_29;
LABEL_25:
          v20 = v13;
          v6 = v8;
        }
      }
    }
    if ( !strncmp(&v23[v9 + 2], "--", 2u) )
      break;
    v6 = 1;
    v7 = (unsigned __int8)(v7 + 1);
  }
  v10 = sub_10BD3C(v21, v18);
  if ( v10 )
    return 1;
LABEL_33:
  BIO_vfree_0(v18);
  return v10;
}
