int __fastcall sub_1D5328(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        unsigned __int64 a8,
        _QWORD *a9)
{
  unsigned __int64 v13; // r6
  int v15; // r0

  v13 = a8;
  if ( off_46DAB4 != "read-only"
    || dword_487D68
    || !sub_1D5110((int)a1, qword_4878EC, SHIDWORD(qword_4878EC), unk_4878F4)
    || a2 != 2 )
  {
    return (*(int (__fastcall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD *))(*a1 + 388))(
             *a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             HIDWORD(a7),
             v13,
             HIDWORD(v13),
             a9);
  }
  if ( !a5 )
  {
    v15 = sub_22F488(a1, a7);
    if ( v15 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v15 + 8) + 20) & 8) != 0 )
      {
        if ( a8 > (unsigned __int64)*(unsigned int *)(v15 + 4) - a7 )
          v13 = *(unsigned int *)(v15 + 4) - a7;
        return (*(int (__fastcall **)(_DWORD, int, int, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _QWORD *))(*a1 + 388))(
                 *a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 a6,
                 a7,
                 HIDWORD(a7),
                 v13,
                 HIDWORD(v13),
                 a9);
      }
    }
  }
  *a9 = a8;
  return 2;
}
