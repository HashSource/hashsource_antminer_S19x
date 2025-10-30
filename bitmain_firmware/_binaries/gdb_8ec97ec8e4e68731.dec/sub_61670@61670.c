int __fastcall sub_61670(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r3
  int v5; // r7
  int i; // r0
  int v7; // r5
  int v8; // r0
  int v9; // [sp+4h] [bp-34h]
  int v10; // [sp+Ch] [bp-2Ch]

  if ( !dword_474850 )
  {
    v2 = (_DWORD *)dword_48769C;
    v3 = dword_487668;
    dword_487668 = dword_48769C;
    v9 = v3;
    if ( dword_48769C )
    {
      v5 = result;
      for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
      {
        result = sub_605EC(i);
        v7 = result;
        if ( result )
        {
          v10 = dword_46DC04;
          sub_22F048(result);
          v8 = *(_DWORD *)(v7 + 32);
          if ( v5 < 0 )
            sub_2594B0(v8, "traceframe-changed,end");
          else
            sub_2594B0(v8, "traceframe-changed,num=\"%d\",tracepoint=\"%d\"\n", v5, a2);
          result = sub_25680C(*(_DWORD *)(v7 + 32));
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
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          break;
        dword_487668 = (int)v2;
      }
    }
    dword_487668 = v9;
  }
  return result;
}
