int __fastcall sub_2399CC(int a1, int (__fastcall **a2)(int a1, int a2))
{
  __int64 v4; // r8
  _DWORD *v6; // r6
  _DWORD *v7; // t1
  int (__fastcall *v8)(_DWORD *, int); // r3
  void (__fastcall ****v9)(_DWORD, int (__fastcall **)(int, int)); // r11
  void (__fastcall ****v10)(_DWORD, int (__fastcall **)(int, int)); // r5
  void (__fastcall ***v11)(_DWORD, int (__fastcall **)(int, int)); // t1
  int v12; // r3
  int v13; // r5
  int v14; // r11
  int v15; // r5
  int (__fastcall ***v16)(int, int); // r12
  int (__fastcall ***v17)(int, int); // t1
  int v18; // r0
  int (__fastcall ***v19)(int, int); // r1
  int (__fastcall *v20)(int, int); // r2
  bool v21; // zf

  (*(void (__fastcall **)(int (__fastcall **)(int, int), int))*a2)(a2, a1);
  v4 = *(_QWORD *)(a1 + 36);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    LODWORD(v4) = v4 - 4;
    HIDWORD(v4) -= 4;
    do
    {
      v7 = *(_DWORD **)(v4 + 4);
      LODWORD(v4) = v4 + 4;
      v6 = v7;
      v8 = *(int (__fastcall **)(_DWORD *, int))*v7;
      if ( v8 == sub_2390E4 )
      {
        (*((void (__fastcall **)(int (__fastcall **)(int, int), _DWORD *))*a2 + 2))(a2, v6);
        v9 = (void (__fastcall ****)(_DWORD, int (__fastcall **)(int, int)))v6[10];
        v10 = (void (__fastcall ****)(_DWORD, int (__fastcall **)(int, int)))v6[11];
        while ( v10 != v9 )
        {
          v11 = *v9++;
          (**v11)(v11, a2);
        }
        v12 = v6[7];
        v13 = v6[8];
        if ( v12 != v13 )
        {
          v14 = v12 - 4;
          v15 = v13 - 4;
          do
          {
            v17 = *(int (__fastcall ****)(int, int))(v14 + 4);
            v14 += 4;
            v16 = v17;
            v18 = (int)a2;
            v19 = v17;
            v20 = **v17;
            v21 = v20 == sub_238B10;
            if ( v20 == sub_238B10 )
            {
              v20 = *a2;
            }
            else
            {
              v18 = (int)v16;
              v19 = (int (__fastcall ***)(int, int))a2;
            }
            if ( v21 )
              v20 = (int (__fastcall *)(int, int))*((_DWORD *)v20 + 7);
            v20(v18, (int)v19);
          }
          while ( v14 != v15 );
        }
        (*((void (__fastcall **)(int (__fastcall **)(int, int), _DWORD *))*a2 + 3))(a2, v6);
      }
      else
      {
        v8(v6, (int)a2);
      }
    }
    while ( (_DWORD)v4 != HIDWORD(v4) );
  }
  return (*((int (__fastcall **)(_DWORD, int))*a2 + 1))(a2, a1);
}
