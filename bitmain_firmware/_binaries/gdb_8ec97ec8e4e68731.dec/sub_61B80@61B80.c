int __fastcall sub_61B80(int result, int a2, const char *a3, const char *a4)
{
  _DWORD *v4; // r4
  int v5; // r12
  int v8; // r8
  int i; // r0
  int v10; // r5
  int v11; // r0
  int v12; // r2
  int v14; // [sp+10h] [bp-14h]
  int v15; // [sp+1Ch] [bp-8h]

  v4 = (_DWORD *)dword_48769C;
  v5 = dword_487668;
  dword_487668 = dword_48769C;
  v14 = v5;
  if ( dword_48769C )
  {
    v8 = result;
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_605EC(i);
      v10 = result;
      if ( result )
      {
        v15 = dword_46DC04;
        sub_22F048(result);
        v11 = *(_DWORD *)(v10 + 32);
        v12 = *(_DWORD *)(v8 + 8);
        if ( a2 )
        {
          if ( a4 )
            sub_2594B0(v11, "record-started,thread-group=\"i%d\",method=\"%s\",format=\"%s\"", v12, a3, a4);
          else
            sub_2594B0(v11, "record-started,thread-group=\"i%d\",method=\"%s\"", v12, a3);
        }
        else
        {
          sub_2594B0(v11, "record-stopped,thread-group=\"i%d\"", v12);
        }
        result = sub_25680C(*(_DWORD *)(v10 + 32));
        if ( v15 == 1 )
        {
          result = sub_22F048(result);
        }
        else if ( v15 )
        {
          if ( v15 == 2 )
            result = sub_22EFF4(result);
        }
        else
        {
          result = sub_22EF7C(result);
        }
      }
      v4 = (_DWORD *)*v4;
      if ( !v4 )
        break;
      dword_487668 = (int)v4;
    }
  }
  dword_487668 = v14;
  return result;
}
