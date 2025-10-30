int __fastcall sub_61578(int result)
{
  _DWORD *v1; // r4
  int v2; // r3
  int v3; // r7
  int i; // r0
  int v5; // r5
  int v6; // r8
  const char *v7; // r9
  const char *v8; // r0
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)dword_48769C;
  v2 = dword_487668;
  dword_487668 = dword_48769C;
  v9 = v2;
  if ( dword_48769C )
  {
    v3 = result;
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_605EC(i);
      v5 = result;
      if ( result )
      {
        v10 = dword_46DC04;
        sub_22F048(result);
        v6 = *(_DWORD *)(v5 + 32);
        v7 = *(const char **)v3;
        v8 = (const char *)sub_988AC(*(_DWORD *)(v3 + 8), *(_DWORD *)(v3 + 12));
        sub_2594B0(v6, "tsv-created,name=\"%s\",initial=\"%s\"\n", v7, v8);
        result = sub_25680C(*(_DWORD *)(v5 + 32));
        if ( v10 == 1 )
        {
          result = sub_22F048(result);
        }
        else if ( v10 )
        {
          if ( v10 == 2 )
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
  dword_487668 = v9;
  return result;
}
