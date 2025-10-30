int __fastcall sub_CB7D0(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  int v8; // r9
  int v10; // r10
  int v11; // r11
  int v12; // r1
  int (__fastcall *v13)(_DWORD *, _DWORD, _DWORD, int); // r7
  int v15; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  if ( *(_DWORD *)(a4 + 20) )
  {
    v8 = a3[2];
    v16 = a3[4];
    v15 = a2[4];
    v10 = a2[2];
    v11 = a3[3];
    if ( (*(int (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 140))(a1, v8, *(_DWORD *)(a4 + 8), a5) )
    {
      if ( sub_133F18(v10, v8, a1[17], a1[10])
        && (*(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140))(a1, v10, v10, a5)
        && (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int))(*a1 + 136))(
             a1,
             v11,
             *(_DWORD *)(a4 + 8),
             a1[18],
             a5)
        && sub_134010(v11, v11, 3, a1[10])
        && sub_133F18(a2[2], v10, v11, a1[10])
        && sub_133AF8(v16, v8, a1[17], a1[10])
        && (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int))(*a1 + 136))(a1, v15, *(_DWORD *)(a4 + 8), v16, a5)
        && sub_133AF8(v15, a1[18], v15, a1[10])
        && sub_134010(a2[4], v15, 2, a1[10]) )
      {
        while ( sub_1365E8(a2[3], a1[10]) )
        {
          if ( !sub_B85B0(a2[3]) )
          {
            while ( sub_1365E8(a3[4], a1[10]) )
            {
              if ( !sub_B85B0(a3[4]) )
              {
                v12 = *a1;
                v13 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152);
                if ( v13 )
                {
                  if ( !v13(a1, a2[3], a2[3], a5)
                    || !(*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152))(a1, a3[4], a3[4], a5) )
                  {
                    return 0;
                  }
                  v12 = *a1;
                }
                if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(v12 + 136))(
                       a1,
                       a2[4],
                       a2[4],
                       a2[3],
                       a5)
                  && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(
                       a1,
                       a2[2],
                       a2[2],
                       a2[3],
                       a5)
                  && (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD, int))(*a1 + 136))(
                       a1,
                       a3[2],
                       *(_DWORD *)(a4 + 8),
                       a3[4],
                       a5) )
                {
                  a2[5] = 0;
                  a3[5] = 0;
                  return 1;
                }
                return 0;
              }
            }
            return 0;
          }
        }
      }
    }
  }
  return 0;
}
