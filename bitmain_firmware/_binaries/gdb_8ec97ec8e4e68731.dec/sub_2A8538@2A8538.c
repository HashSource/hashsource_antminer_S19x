int __fastcall sub_2A8538(int a1, __int64 a2, int a3)
{
  int *v4; // r6
  int v5; // r1
  int v6; // lr
  unsigned int v7; // r4
  unsigned int v8; // r5
  int v9; // r3
  int v11; // r0
  int *v12; // r0
  int *v13; // r0

  v4 = *(int **)(a1 + 8);
  if ( a3 )
    a2 += *(_QWORD *)(a1 + 24);
  if ( a2 < 0 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v12 = _errno_location();
    v9 = -1;
    *v12 = 22;
  }
  else
  {
    v5 = *v4;
    if ( (unsigned int)a2 > *v4 )
    {
      v6 = *(_BYTE *)(a1 + 40) & 0x10;
      if ( (*(_BYTE *)(a1 + 40) & 0x10) == 0 )
      {
        *(_DWORD *)(a1 + 24) = v5;
        *(_DWORD *)(a1 + 28) = v6;
        *_errno_location() = 22;
        ((void (__fastcall *)(int))loc_2A6C48)(18);
        return -1;
      }
      v7 = (v5 + 127) & 0xFFFFFF80;
      v8 = (a2 + 127) & 0xFFFFFF80;
      *v4 = a2;
      if ( v7 < v8 )
      {
        v11 = sub_2AB4B4(v4[1], (a2 + 127) & 0xFFFFFF80);
        v4[1] = v11;
        if ( !v11 )
        {
          v13 = _errno_location();
          v9 = -1;
          *v13 = 22;
          *v4 = 0;
          return v9;
        }
        memset((void *)(v11 + v7), 0, v8 - v7);
      }
    }
    return 0;
  }
  return v9;
}
