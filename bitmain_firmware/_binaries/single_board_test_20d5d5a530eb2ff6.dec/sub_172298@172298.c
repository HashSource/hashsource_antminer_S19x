int __fastcall sub_172298(_DWORD *a1, int a2, int a3)
{
  void *v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r8
  int v10; // r6
  int v11; // r9
  int v12; // r0
  int v13; // r4
  _BYTE *v14; // r2
  int v15; // r5
  int v16; // r1
  int v17; // r3
  int v18; // t1
  int v19; // r2
  int i; // r10
  int v22; // [sp+8h] [bp-40Ch]
  char *v23; // [sp+Ch] [bp-408h]
  _BYTE v24[1028]; // [sp+10h] [bp-404h] BYREF

  v6 = sub_B6550();
  result = (int)sub_B655C((int)v6);
  v22 = result;
  if ( result )
  {
    v8 = sub_B70C0(result, a2);
    v9 = v8;
    if ( (a3 & 0x80) != 0 )
    {
      while ( 1 )
      {
        v19 = sub_B6740((int)a1, (int)v24, 1024);
        if ( v19 <= 0 )
          break;
        sub_B69CC(v9, (int)v24, v19);
      }
    }
    else
    {
      if ( (a3 & 1) != 0 )
        sub_B550C(v8, "Content-Type: text/plain\r\n\r\n", a3 << 24, a3 << 31);
      v10 = a3 & 0x80000;
      v11 = 0;
      v23 = "\r\n";
LABEL_6:
      while ( 1 )
      {
        v12 = sub_B6D58(a1, (int)v24, 1024);
        v13 = v12;
        if ( v12 <= 0 )
          break;
        v14 = &v24[v12];
        v15 = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            v18 = (unsigned __int8)*--v14;
            v17 = v18;
            if ( v18 != 10 )
            {
              v16 = v10;
              if ( v10 )
                v16 = 1;
              if ( v17 != 32 )
                v16 = 0;
              if ( !v15 || !v16 )
                break;
            }
            --v13;
            v15 = 1;
            if ( !v13 )
            {
LABEL_18:
              if ( v10 )
              {
                ++v11;
              }
              else if ( v15 )
              {
                sub_B69CC(v9, (int)v23, 2);
              }
              goto LABEL_6;
            }
          }
          if ( v17 != 13 )
            break;
          if ( !--v13 )
            goto LABEL_18;
        }
        if ( v10 )
        {
          if ( v11 )
          {
            for ( i = 0; i != v11; ++i )
              sub_B69CC(v9, (int)"\r\n", 2);
          }
          v11 = 0;
        }
        sub_B69CC(v9, (int)v24, v13);
        if ( v15 )
          sub_B69CC(v9, (int)"\r\n", 2);
      }
    }
    sub_B6ECC(v9, 11, 0, 0);
    sub_B70E8(v9);
    BIO_vfree_0(v22);
    return 1;
  }
  return result;
}
