int __fastcall sub_61324(int result)
{
  _DWORD *v1; // r4
  int v2; // r3
  _DWORD *v3; // r7
  int i; // r0
  int v5; // r6
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  v10 = v2;
  if ( dword_48769C )
  {
    v3 = (_DWORD *)result;
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_605EC(i);
      v5 = result;
      if ( result )
      {
        v6 = sub_191AC0(result);
        v7 = sub_191664(v6);
        v11 = dword_46DC04;
        sub_22F048(v7);
        sub_2594B0(*(_DWORD *)(v5 + 32), "tsv-modified");
        sub_2573D8(v7, *(_DWORD *)(v5 + 32));
        sub_2575E8(v7, "name", *v3);
        v8 = sub_988AC(v3[2], v3[3]);
        sub_2575E8(v7, "initial", v8);
        if ( v3[4] )
        {
          v9 = sub_988AC(v3[6], v3[7]);
          sub_2575E8(v7, "current", v9);
        }
        sub_2573D8(v7, 0);
        result = sub_25680C(*(_DWORD *)(v5 + 32));
        if ( v11 == 1 )
        {
          result = sub_22F048(result);
        }
        else if ( v11 )
        {
          if ( v11 == 2 )
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
  dword_487668 = v10;
  return result;
}
