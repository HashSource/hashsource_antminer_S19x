int __fastcall sub_5BA00(int *a1, FILE *a2, _DWORD *a3)
{
  bool v3; // zf
  unsigned int v4; // r4
  _DWORD *v9; // r4
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r8
  _DWORD *v13; // r4
  int v14; // r0
  unsigned int v15; // r7
  size_t v16; // r0
  _DWORD *v17; // r3
  _BYTE ptr[20]; // [sp+4h] [bp-14h] BYREF

  v3 = a1 == 0;
  if ( a1 )
    v3 = a2 == 0;
  if ( v3 )
    return -1;
  v9 = malloc(0x18u);
  *a1 = (int)v9;
  if ( !v9 )
    return -9;
  if ( a3 )
  {
    switch ( *a3 )
    {
      case 0:
      case 4:
        v10 = 0x10000;
        v9[3] = 0x10000;
        goto LABEL_10;
      case 5:
        v10 = 0x40000;
        v9[3] = 0x40000;
        goto LABEL_10;
      case 6:
        v10 = 0x100000;
        v9[3] = 0x100000;
        goto LABEL_10;
      case 7:
        v10 = 0x400000;
        v9[3] = 0x400000;
        goto LABEL_10;
      default:
        v4 = -2;
        free(a1);
        break;
    }
  }
  else
  {
    v10 = 0x10000;
    v9[3] = 0x10000;
LABEL_10:
    v11 = sub_57B14(v10, (int)a3);
    v12 = (_DWORD *)*a1;
    v9[4] = v11;
    v12[2] = malloc(v12[4]);
    v13 = (_DWORD *)*a1;
    if ( *(_DWORD *)(*a1 + 8) )
    {
      v14 = sub_575A0();
      v4 = sub_577B0(v13, v14);
      if ( !sub_57568(v4) )
      {
        v15 = sub_57B00(*(_DWORD *)*a1, (int)ptr, 0x13u, a3);
        v4 = sub_57568(v15);
        if ( v4 )
        {
          v17 = (_DWORD *)*a1;
          v4 = v15;
        }
        else
        {
          v16 = fwrite(ptr, 1u, v15, a2);
          v17 = (_DWORD *)*a1;
          if ( v15 == v16 )
          {
            v17[1] = a2;
            *(_DWORD *)(*a1 + 20) = 0;
            return v4;
          }
          v4 = -1;
        }
        sub_577DC((_DWORD *)*v17);
      }
      free(*(void **)(*a1 + 8));
      free((void *)*a1);
    }
    else
    {
      v4 = -9;
      free((void *)*a1);
    }
  }
  return v4;
}
