int __fastcall sub_CAEE0(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  int v10; // r7
  int v11; // r4
  int result; // r0
  int (__fastcall *v13)(_DWORD *, _DWORD, _DWORD, int); // r9
  int (__fastcall *v14)(_DWORD *, _DWORD, _DWORD, int); // r8
  _BOOL4 v15; // r0
  _BOOL4 v16; // r9
  int (__fastcall *v17)(_DWORD *, _DWORD, _DWORD, int); // r8
  int (__fastcall *v18)(_DWORD *, _DWORD, int); // r3
  int v19; // [sp+4h] [bp-8h]

  v6 = a6;
  v10 = 0;
  if ( a6 )
  {
LABEL_2:
    if ( (!a3
       || sub_1337FC(a2[2], a3, a1[10], v6)
       && ((v13 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152)) == 0 || v13(a1, a2[2], a2[2], v6)))
      && (!a4
       || sub_1337FC(a2[3], a4, a1[10], v6)
       && ((v14 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152)) == 0 || v14(a1, a2[3], a2[3], v6))) )
    {
      if ( !a5 )
      {
LABEL_20:
        v11 = 1;
        goto LABEL_5;
      }
      if ( sub_1337FC(a2[4], a5, a1[10], v6) )
      {
        v15 = sub_B86D8(a2[4]);
        v16 = v15;
        v17 = *(int (__fastcall **)(_DWORD *, _DWORD, _DWORD, int))(*a1 + 152);
        if ( !v17 )
        {
LABEL_19:
          a2[5] = v16;
          goto LABEL_20;
        }
        if ( v15 && (v18 = *(int (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 160)) != 0 )
        {
          if ( v18(a1, a2[4], v6) )
            goto LABEL_19;
        }
        else if ( v17(a1, a2[4], a2[4], v6) )
        {
          goto LABEL_19;
        }
      }
    }
    v11 = 0;
LABEL_5:
    sub_130B5C(v10);
    return v11;
  }
  v19 = a3;
  result = sub_130B08(a1);
  v6 = result;
  if ( result )
  {
    v10 = result;
    a3 = v19;
    goto LABEL_2;
  }
  return result;
}
