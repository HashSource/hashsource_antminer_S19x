int __fastcall sub_9B330(_DWORD *a1, char *s, _DWORD *a3, int *a4)
{
  _DWORD *v5; // r1
  _BOOL4 v9; // r2
  const char *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int *v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r12
  int v21; // r3
  bool v22; // zf
  unsigned int v23; // r3
  int v24; // r3
  int result; // r0
  unsigned int v26; // [sp+Ch] [bp-8h] BYREF

  v5 = (_DWORD *)a1[1];
  if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
    goto LABEL_13;
  v9 = *v5 >= 772;
  if ( *v5 == 0x10000 )
    v9 = 0;
  if ( !v9 )
  {
LABEL_13:
    v24 = sub_B6ECC(*(_DWORD *)(a1[31] + 212), 3, 0, a3);
    if ( v24 <= 0 )
    {
      sub_95494(a1, 80, 588, 68, (int)"ssl/statem/statem_lib.c", 221);
      return 0;
    }
    else
    {
      *a4 = v24;
      return 1;
    }
  }
  else
  {
    memset(s, 32, 0x40u);
    if ( (unsigned int)(a1[16] - 39) <= 1 )
      v10 = (const char *)&unk_1A9B9C;
    else
      v10 = "TLS 1.3, client CertificateVerify";
    v11 = *(_DWORD *)v10;
    v12 = *((_DWORD *)v10 + 1);
    v13 = *((_DWORD *)v10 + 2);
    v14 = *((_DWORD *)v10 + 3);
    v15 = (int *)(v10 + 16);
    *((_DWORD *)s + 16) = v11;
    *((_DWORD *)s + 17) = v12;
    *((_DWORD *)s + 18) = v13;
    *((_DWORD *)s + 19) = v14;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v19 = v15[3];
    v20 = v15[4];
    *((_DWORD *)s + 20) = v16;
    *((_DWORD *)s + 21) = v17;
    *((_DWORD *)s + 22) = v18;
    *((_DWORD *)s + 23) = v19;
    *((_WORD *)s + 48) = v20;
    v21 = a1[16];
    v22 = v21 == 29;
    if ( v21 != 29 )
      v22 = v21 == 39;
    if ( v22 )
    {
      memcpy(s + 98, a1 + 258, a1[274]);
      v23 = a1[274];
LABEL_12:
      *a3 = s;
      *a4 = v23 + 98;
      return 1;
    }
    result = sub_8B6E8((int)a1, (int)(s + 98), 0x40u, &v26);
    if ( result )
    {
      v23 = v26;
      goto LABEL_12;
    }
  }
  return result;
}
