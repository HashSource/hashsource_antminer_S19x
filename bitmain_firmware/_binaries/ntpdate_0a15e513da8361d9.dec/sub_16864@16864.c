int __fastcall sub_16864(_DWORD *a1, const char *a2, int a3, int a4, int a5, int a6)
{
  int v10; // r2
  unsigned int v11; // r4
  _DWORD *v12; // r8
  void *v13; // r0
  int v14; // r2
  int v16; // r2
  void *v17; // r0
  __int64 v18; // r10

  if ( !a1 || *a1 != 1281582695 )
    sub_10C38();
  if ( !a2 )
    sub_10C38();
  if ( (unsigned int)(a3 - 1) > 3 )
    sub_10C38();
  v10 = a5;
  if ( a5 )
    v10 = 1;
  if ( a3 == 1 )
    v10 |= 1u;
  if ( !v10 )
    sub_10C38();
  if ( a4 < -5 )
    sub_10C38();
  v11 = a6 & 0xFFFFEFE0;
  if ( (a6 & 0xFFFFEFE0) != 0 )
    sub_10C38();
  v12 = sub_9A68(0, 0x38u, 0, 0);
  if ( !v12 )
    return 1;
  v13 = sub_9BF0(a2);
  *v12 = v13;
  if ( v13 )
  {
    v12[1] = a3;
    v12[2] = a4;
    v12[3] = a6;
    v12[12] = -1;
    v12[13] = -1;
    switch ( a3 )
    {
      case 3:
        v17 = sub_9BF0(*(const char **)(a5 + 4));
        v18 = *(_QWORD *)(a5 + 16);
        v12[6] = *(_DWORD *)(a5 + 8);
        *((_QWORD *)v12 + 4) = v18;
        v12[4] = 0;
        v12[10] = 0;
        v12[5] = v17;
        break;
      case 4:
        v16 = *(_DWORD *)a5;
        v12[5] = 0;
        v12[6] = -2;
        v12[4] = v16;
        *((_QWORD *)v12 + 4) = 0;
        break;
      case 2:
        v12[4] = *(_DWORD *)a5;
        break;
    }
    v14 = a1[2];
    if ( v14 )
      *(_DWORD *)(v14 + 48) = v12;
    else
      a1[3] = v12;
    v12[13] = v14;
    v12[12] = 0;
    a1[2] = v12;
    if ( !strcmp(a2, "default_stderr") )
      dword_3337C = (int)v12;
  }
  else
  {
    v11 = 1;
    free(v12);
  }
  return v11;
}
