int __fastcall sub_FB680(unsigned int a1, int a2, size_t a3, int a4, int *a5, int a6)
{
  int (__fastcall *v6)(unsigned int, int); // r4
  int v8; // r7
  size_t v9; // r6
  int v11; // r0
  int v12; // r10
  void *v13; // r9
  int v14; // r4
  int v15; // r0
  int *v16; // r3
  void *v17; // [sp+Ch] [bp-2Ch] BYREF
  _DWORD v18[2]; // [sp+10h] [bp-28h] BYREF
  char **v19; // [sp+18h] [bp-20h] BYREF
  _DWORD v20[2]; // [sp+20h] [bp-18h] BYREF
  _DWORD v21[4]; // [sp+28h] [bp-10h] BYREF

  v6 = *(int (__fastcall **)(unsigned int, int))(*(_DWORD *)(a6 + 8) + 44);
  if ( !v6 )
  {
    v8 = a2;
    v9 = a3;
    if ( a1 != 114 )
    {
      v17 = *(void **)(*(_DWORD *)(a6 + 8) + 44);
      v18[0] = &v19;
      v19 = sub_EAA20(a1);
      if ( v19 )
      {
        if ( sub_EB278((int)v19) )
        {
          v20[1] = 0;
          v21[0] = v9;
          *(_DWORD *)(v18[0] + 4) = v20;
          v21[2] = v8;
          v20[0] = 5;
          v18[1] = v21;
          v11 = i2d_X509_SIG(v18, &v17);
          v12 = v11;
          if ( v11 >= 0 )
          {
            v13 = v17;
            v9 = v11;
            v8 = (int)v17;
LABEL_9:
            if ( sub_F7ED8(a6) - 10 > v12 )
            {
              v14 = 1;
              v15 = sub_F7F00(v12, v8, a4, a6);
              if ( v15 <= 0 )
                v14 = 0;
              else
                v16 = a5;
              if ( v15 > 0 )
                *v16 = v15;
            }
            else
            {
              v14 = 0;
              sub_D0048(4, 117, 112, (int)"crypto/rsa/rsa_sign.c", 100);
            }
            goto LABEL_11;
          }
        }
        else
        {
          sub_D0048(4, 146, 116, (int)"crypto/rsa/rsa_sign.c", 49);
        }
      }
      else
      {
        sub_D0048(4, 146, 117, (int)"crypto/rsa/rsa_sign.c", 44);
      }
      v9 = 0;
      v13 = 0;
      v14 = 0;
LABEL_11:
      sub_E0758(v13, v9, (size_t)"crypto/rsa/rsa_sign.c");
      return v14;
    }
    if ( a3 != 36 )
    {
      sub_D0048(4, 117, 131, (int)"crypto/rsa/rsa_sign.c", 88);
      return 0;
    }
    v13 = *(void **)(*(_DWORD *)(a6 + 8) + 44);
    v12 = 36;
    goto LABEL_9;
  }
  return v6(a1, a2);
}
