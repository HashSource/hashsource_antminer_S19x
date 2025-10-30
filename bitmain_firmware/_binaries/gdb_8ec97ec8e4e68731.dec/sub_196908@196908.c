int __fastcall sub_196908(_DWORD *a1, int *a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned int v6; // r5
  int v9; // r4
  _DWORD *v10; // r6
  int v11; // t1
  int v12; // r0
  char *v14; // r5
  int v15; // r2
  _DWORD v16[2]; // [sp+Ch] [bp-8h] BYREF

  v6 = 0;
  v16[0] = 0;
  if ( a2 )
  {
    v9 = *a2;
    if ( *a2 )
    {
      v10 = a2 + 1;
      do
      {
        v11 = v10[1];
        ++v10;
        ++v6;
        v12 = sub_2209DC(v11);
        ((void (__fastcall *)(_DWORD))loc_1CD290)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v12 + 4) + 4) + 16));
        ((void (__fastcall *)(_DWORD, int, int, _DWORD, _DWORD *, int))loc_19662C)(
          *(_DWORD *)(v11 + 8),
          a4,
          v11,
          a5,
          v16,
          a3);
      }
      while ( v6 < *a2 );
      return v16[0];
    }
  }
  else
  {
    ((void (__fastcall *)(_DWORD))loc_1CD290)(*a1);
    v14 = off_46D5A4[0][2];
    v9 = sub_20F388(0);
    sub_194204((int)v14);
    if ( v9 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v9 + 8);
        if ( v15 )
          break;
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
          return v9;
      }
      ((void (__fastcall *)(int, int, int, _DWORD, _DWORD *, int))loc_19662C)(v9, a4, v15, a5, v16, a3);
      return v16[0];
    }
  }
  return v9;
}
