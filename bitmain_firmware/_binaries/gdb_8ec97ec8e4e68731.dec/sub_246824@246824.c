int __fastcall sub_246824(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r6
  int v7; // r4
  bool v8; // cc
  int v9; // r0
  int v10; // r0
  int v11; // r3
  _BYTE v12[7]; // [sp+0h] [bp-2Ch] BYREF
  char v13; // [sp+7h] [bp-25h] BYREF
  int v14; // [sp+8h] [bp-24h] BYREF
  int v15; // [sp+Ch] [bp-20h] BYREF

  result = sub_1DD58C(a2);
  if ( dword_48A5AC )
  {
    v6 = result;
    v13 = 82;
    if ( sub_246544((int (__fastcall *)(_DWORD, int))sub_245D38, 0, (int)&v13) < 0 )
    {
      return sub_245BE4(a2);
    }
    else
    {
      v7 = 0;
      sub_2464F8(v12, dword_48A5AC);
      while ( 1 )
      {
        v8 = v7 < ((int (__fastcall *)(int))loc_166E9C)(v6);
        result = a2;
        if ( !v8 )
          break;
        v9 = sub_1DD58C(a2);
        if ( sub_1E7390(v9, v7, &v15, &v14) )
        {
          v10 = ((int (__fastcall *)(int, int))loc_1DD420)(v6, v7);
          v11 = v10 + v14;
          result = a2;
          if ( v11 > dword_48A5AC )
            return result;
          if ( !((int (__fastcall *)(int, int))loc_1DD900)(a2, v7) )
          {
            if ( v7 == a3 )
              return ((int (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a2, v7, &v12[v14]);
            if ( a3 == -1 )
              ((void (__fastcall *)(int, int, _BYTE *))loc_1DE9C8)(a2, v7, &v12[v14]);
          }
        }
        ++v7;
      }
    }
  }
  return result;
}
