void *__fastcall sub_57928(int (__fastcall *a1)(int), _DWORD *a2, void (__fastcall *a3)(_DWORD, int), int a4)
{
  _DWORD *v6; // r4
  int v9; // r11
  int v10; // r0
  const char *v11; // r0
  int v12; // r0
  _DWORD *v13; // r3
  int v14; // r0
  int v15; // r2
  bool v16; // zf
  _DWORD *v18; // r2
  int v19; // r4
  void *v20; // r0
  size_t v21; // r2
  void *ptr; // [sp+Ch] [bp-18h]
  void *ptra; // [sp+Ch] [bp-18h]
  void *v24; // [sp+10h] [bp-14h]
  _DWORD *v25; // [sp+1Ch] [bp-8h] BYREF

  if ( !a2[2] )
    sub_946E0("Recursed on a simple control type.");
  if ( (int)a2[5] <= 0 )
    sub_946E0("Allocated body is smaller than this command type needs.");
  v6 = 0;
  v9 = 1;
  while ( 1 )
  {
    do
    {
      v10 = sub_243C34();
      v25 = 0;
      v11 = (const char *)a1(v10);
      v12 = sub_574C4(v11, (int)&v25, (unsigned int)(a2[2] - 6) > 2, a3, a4);
    }
    while ( v12 == 3 );
    if ( v12 == 1 )
      break;
    if ( v12 == 2 )
    {
      v15 = a2[2];
      v16 = v15 == 4;
      if ( v15 == 4 )
        v16 = v9 == 1;
      if ( !v16 )
      {
        v14 = 10;
        goto LABEL_16;
      }
      v19 = a2[5];
      v9 = 2;
      if ( v19 <= 1 )
      {
        v20 = (void *)sub_93094(2, 4u);
        v21 = 4 * v19;
        v24 = v20;
        v6 = 0;
        ptra = (void *)a2[6];
        memcpy(v20, ptra, v21);
        free(ptra);
        a2[6] = v24;
        a2[5] = 2;
      }
      else
      {
        v6 = 0;
      }
    }
    else
    {
      v13 = v25;
      if ( v6 )
      {
        *v6 = v25;
        v6 = v13;
      }
      else
      {
        v18 = (_DWORD *)a2[6];
        if ( v9 != 1 )
          ++v18;
        *v18 = v25;
        v6 = v25;
      }
      if ( (unsigned int)(v6[2] - 3) <= 6 )
      {
        ++dword_474808;
        v14 = sub_57928(a1, v6, a3, a4);
        --dword_474808;
        if ( v14 )
          goto LABEL_16;
      }
    }
  }
  if ( (unsigned int)(a2[2] - 3) <= 6 )
    v14 = 0;
  else
    v14 = 10;
LABEL_16:
  ptr = (void *)v14;
  sub_243C34();
  return ptr;
}
