_DWORD *__fastcall sub_57F2C(_DWORD *a1, int (__fastcall *a2)(int), int a3, void (__fastcall *a4)(_DWORD, int), int a5)
{
  _DWORD *v5; // r10
  _DWORD *v10; // r4
  int i; // r0
  const char *v12; // r0
  int v13; // r0
  _DWORD *v14; // r1
  void *v15; // r0
  _DWORD *v17; // [sp+Ch] [bp-10h] BYREF
  _DWORD *v18; // [sp+10h] [bp-Ch] BYREF
  _DWORD *v19; // [sp+14h] [bp-8h] BYREF

  v5 = 0;
  v10 = 0;
  dword_474808 = 0;
LABEL_2:
  for ( i = sub_243C34(); ; i = sub_243C34() )
  {
    v12 = (const char *)a2(i);
    v13 = sub_574C4(v12, (int)&v17, a3, a4, a5);
    if ( v13 == 3 )
      goto LABEL_2;
    if ( v13 == 1 )
    {
      sub_243C34();
      *a1 = v5;
      return a1;
    }
    if ( v13 )
      break;
    v14 = v17;
    if ( (unsigned int)(v17[2] - 3) <= 6 )
    {
      ++dword_474808;
      v15 = sub_57928(a2, v17, a4, a5);
      --dword_474808;
      if ( v15 == (void *)10 )
        break;
      v14 = v17;
      if ( !v10 )
      {
LABEL_11:
        if ( v5 )
        {
          v18 = v5;
          v5 = v14;
          sub_57E18(&v18);
          v10 = v17;
        }
        else
        {
          v10 = v14;
          v5 = v14;
        }
        goto LABEL_2;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_11;
    }
    *v10 = v14;
    v10 = v14;
  }
  sub_243C34();
  *a1 = 0;
  if ( v5 )
  {
    v19 = v5;
    sub_57E18(&v19);
  }
  return a1;
}
