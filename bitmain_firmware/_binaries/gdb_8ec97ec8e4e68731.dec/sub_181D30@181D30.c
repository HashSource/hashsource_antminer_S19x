int __fastcall sub_181D30(int a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r4
  _DWORD *v7; // r5
  int v8; // r6
  _DWORD *v9; // r4
  int v10; // [sp+0h] [bp-28h] BYREF
  _DWORD v11[9]; // [sp+4h] [bp-24h] BYREF

  result = sub_183688(a1);
  v5 = *(unsigned __int8 *)(result + 140);
  v6 = result;
  *(_DWORD *)(result + 24) = 0;
  if ( v5 )
    result = sub_181CB4(a1);
  if ( a2 == 1 )
  {
    if ( dword_487950 )
    {
      v10 = *(_DWORD *)(v6 + 12);
      ((void (__fastcall *)(_DWORD *))loc_23FF20)(v11);
      sub_23E4A0(sub_17F430, &v10);
      return ((int (__fastcall *)(_DWORD *))loc_23FC8C)(v11);
    }
    else
    {
      result = *(_DWORD *)(((int (*)(void))loc_23DBE4)() + 144);
      if ( !result )
      {
        sub_187D70(0);
        return sub_18BAD4(-1, 144);
      }
    }
  }
  else if ( a2 == 2 )
  {
    if ( dword_487950 )
    {
      sub_98F50(v11, *(_DWORD *)(v6 + 12));
      sub_231EB4(v11[0], v11[1], v11[2]);
    }
    else if ( sub_232950() )
    {
      v7 = (_DWORD *)((int (*)(void))loc_23DBE4)();
      v8 = *(_DWORD *)(sub_183688(v7) + 12);
      sub_18A0C0();
      v9 = (_DWORD *)dword_48A4D4;
      if ( dword_48A4D4 )
      {
        do
        {
          if ( v9[11] != 2 && v8 == ps_getpid_0((int)(v9 + 2)) )
          {
            if ( *(_DWORD *)(v9[7] + 8) >= *(_DWORD *)(v7[7] + 8) )
            {
              if ( v9[6] < v7[6] )
                v7 = v9;
            }
            else
            {
              v7 = v9;
            }
          }
          v9 = (_DWORD *)v9[1];
        }
        while ( v9 );
      }
      sub_23F9F0(v7[2], v7[3], v7[4]);
    }
    result = sub_1889B4();
    if ( off_48A570 )
      return off_48A570(result);
  }
  return result;
}
