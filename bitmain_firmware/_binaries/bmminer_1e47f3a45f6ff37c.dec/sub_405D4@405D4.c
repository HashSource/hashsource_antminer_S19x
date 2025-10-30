int __fastcall sub_405D4(int a1)
{
  char *v2; // r5
  char *v3; // r6
  int i; // r12
  int v5; // r2
  int v6; // r3
  char *v7; // r0
  int v8; // r3
  char v10; // [sp+3h] [bp-Dh] BYREF
  _DWORD v11[2]; // [sp+4h] [bp-Ch] BYREF
  char v12; // [sp+Ch] [bp-4h] BYREF

  v11[0] = 0;
  v11[1] = 0;
  v12 = 0;
  pthread_mutex_lock(&stru_4BBB10);
  v2 = (char *)&stru_4B9A28 + 2060 * a1;
  v3 = (char *)&unk_4B9AE0 + 2060 * a1;
  for ( i = *((_DWORD *)v2 + 560); i > 10; *((_DWORD *)v2 + 560) = i )
  {
    while ( 1 )
    {
      v6 = *((_DWORD *)v2 + 559);
      if ( (unsigned __int8)v3[v6] != 170 )
        break;
      v5 = (v6 + 1) % 2048;
      if ( v3[v5] != 85 )
        goto LABEL_3;
      v7 = &v10;
      v8 = (v6 + 2) % 2048;
      *((_DWORD *)v2 + 559) = v8;
      do
      {
        *++v7 = v3[v8];
        v8 = (v8 + 1) % 2048;
        *((_DWORD *)v2 + 559) = v8;
      }
      while ( v7 != &v12 );
      *((_DWORD *)v2 + 560) = i - 11;
      if ( !sub_3F318(a1, (int)v11) )
      {
        i = *((_DWORD *)v2 + 560);
        if ( i > 10 )
          continue;
      }
      return pthread_mutex_unlock(&stru_4BBB10);
    }
    v5 = (v6 + 1) % 2048;
LABEL_3:
    --i;
    *((_DWORD *)v2 + 559) = v5;
  }
  return pthread_mutex_unlock(&stru_4BBB10);
}
