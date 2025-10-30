unsigned __int8 *__fastcall sub_16D528(int a1, char *s, const char *a3)
{
  int (*v3)(void); // r3
  size_t v7; // r0
  void *v8; // r5
  unsigned __int8 *v9; // r0
  unsigned __int8 *v10; // r4
  unsigned __int8 *v11; // r0
  __int16 v12; // [sp+Ch] [bp-18h] BYREF
  char v13[8]; // [sp+10h] [bp-14h] BYREF
  char v14[12]; // [sp+18h] [bp-Ch] BYREF

  v3 = *(int (**)(void))(*(_DWORD *)a1 + 32);
  if ( !v3 )
  {
    v12 = 58;
    strcpy(v14, "Enter ");
    strcpy(v13, " for ");
    if ( s )
    {
      v7 = strlen(s);
      if ( a3 )
      {
        v8 = (void *)(strlen(a3) + v7 + 13);
        v9 = (unsigned __int8 *)CRYPTO_malloc(v8);
        v10 = v9;
        if ( v9 )
        {
          sub_E9F28(v9, v14, (unsigned int)v8);
          sub_E9F6C(v10, s, (unsigned int)v8);
          sub_E9F6C(v10, v13, (unsigned int)v8);
          sub_E9F6C(v10, a3, (unsigned int)v8);
LABEL_8:
          sub_E9F6C(v10, (const char *)&v12, (unsigned int)v8);
          return v10;
        }
      }
      else
      {
        v8 = (void *)(v7 + 8);
        v11 = (unsigned __int8 *)CRYPTO_malloc((void *)(v7 + 8));
        v10 = v11;
        if ( v11 )
        {
          sub_E9F28(v11, v14, (unsigned int)v8);
          sub_E9F6C(v10, s, (unsigned int)v8);
          goto LABEL_8;
        }
      }
      sub_D0048(40, 121, 65, (int)"crypto/ui/ui_lib.c", 378);
    }
    return 0;
  }
  return (unsigned __int8 *)v3();
}
