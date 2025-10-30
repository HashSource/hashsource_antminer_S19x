int __fastcall sub_62884(int result)
{
  _DWORD *v1; // r4
  int v2; // r11
  int v3; // r8
  int i; // r0
  int v5; // r5
  int v6; // r0
  int v7; // r6
  int v8; // [sp+4h] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v3 = result;
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_605EC(i);
      v5 = result;
      if ( result )
      {
        v6 = sub_191AC0(result);
        v7 = sub_191664(v6);
        v8 = dword_46DC04;
        sub_22F048(v7);
        sub_2594B0(*(_DWORD *)(v5 + 32), "library-loaded");
        sub_2573D8(v7, *(_DWORD *)(v5 + 32));
        sub_6274C(v7, v3);
        sub_2573D8(v7, 0);
        result = sub_25680C(*(_DWORD *)(v5 + 32));
        if ( v8 == 1 )
        {
          result = sub_22F048(result);
        }
        else if ( v8 )
        {
          if ( v8 == 2 )
            result = sub_22EFF4(result);
        }
        else
        {
          result = sub_22EF7C(result);
        }
      }
      v1 = (_DWORD *)*v1;
      if ( !v1 )
        break;
      dword_487668 = (int)v1;
    }
  }
  dword_487668 = v2;
  return result;
}
