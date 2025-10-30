int __fastcall sub_138A04(int a1, _DWORD *a2, int a3)
{
  signed int *v3; // r3
  signed int v6; // r6
  char *v7; // r7
  int v8; // r0
  int v9; // r6
  int v11; // r4
  void *v12; // r10
  void *v13; // r7
  int v14; // r4
  size_t n; // [sp+10h] [bp-4Ch] BYREF
  void *v16; // [sp+14h] [bp-48h] BYREF
  _BYTE v17[68]; // [sp+18h] [bp-44h] BYREF

  v3 = *(signed int **)(a3 + 4);
  v6 = *v3;
  v7 = (char *)v3[2];
  v8 = sub_137898(a2, 1);
  if ( v8 )
  {
    v11 = a2[1];
    n = sub_D8AD4(*(_DWORD *)(v11 + 24));
    if ( n > 0x40 )
    {
      v9 = 0;
      goto LABEL_3;
    }
    if ( sub_DAE14(*(int **)(v11 + 20), (int)v17, &n) > 0
      && sub_D8440(*(int **)(v11 + 24), 0, 0, (int)v17, 0, 0)
      && sub_D8188(*(_DWORD **)(v11 + 24), 0, (int *)&v16, v7, v6)
      && (v12 = CRYPTO_malloc(v16)) != 0 )
    {
      if ( sub_D8188(*(_DWORD **)(v11 + 24), (int)v12, (int *)&v16, v7, v6) )
      {
        v13 = v16;
        v9 = 1;
        sub_E07F8(v17, n);
        sub_D7A10(*(int **)(v11 + 24));
        sub_DB4BC(*(_DWORD *)(v11 + 20));
        *(_DWORD *)(v11 + 20) = 0;
        v14 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 12);
        sub_E0758(*(void **)(v14 + 16), *(_DWORD *)(v14 + 20), (size_t)"crypto/cms/cms_kari.c");
        *(_DWORD *)(v14 + 20) = v13;
        *(_DWORD *)(v14 + 16) = v12;
        goto LABEL_3;
      }
    }
    else
    {
      v12 = 0;
    }
    sub_E07F8(v17, n);
    CRYPTO_free(v12);
    sub_D7A10(*(int **)(v11 + 24));
    sub_DB4BC(*(_DWORD *)(v11 + 20));
    v8 = 0;
    *(_DWORD *)(v11 + 20) = 0;
  }
  v9 = v8;
LABEL_3:
  CRYPTO_free(0);
  return v9;
}
