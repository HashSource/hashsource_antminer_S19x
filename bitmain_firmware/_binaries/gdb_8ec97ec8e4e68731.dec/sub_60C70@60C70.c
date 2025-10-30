int __fastcall sub_60C70(int result, int a2)
{
  _DWORD *v2; // r5
  int v3; // r3
  int i; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r4
  int v9; // r8
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+0h] [bp-Ch]

  v2 = (_DWORD *)dword_48769C;
  v3 = dword_487668;
  dword_487668 = dword_48769C;
  v14 = v3;
  if ( dword_48769C )
  {
    for ( i = sub_191AC0(result); ; i = sub_191AC0(result) )
    {
      result = sub_605EC(i);
      if ( result )
      {
        v6 = sub_191AC0(result);
        v7 = sub_191664(v6);
        v8 = sub_191AC0(v7);
        if ( a2 )
        {
          v9 = ((int (*)(void))loc_23DBE4)();
          if ( *(_DWORD *)(v9 + 204) && sub_242280() )
          {
            v12 = sub_242288(*(_DWORD *)(v9 + 204));
            v13 = sub_9835C(v12);
            sub_2575E8(v7, "reason", v13);
          }
          sub_18881C(v7);
          v10 = sub_191588(dword_487668, "console");
          if ( sub_568F4(v10, v9) )
            sub_18881C(*(_DWORD *)(v8 + 48));
          sub_257504(v7, "thread-id", *(_DWORD *)(v9 + 20));
          if ( dword_487950 )
          {
            sub_2578AC(v7, 1);
            sub_257504(v7, 0, *(_DWORD *)(v9 + 20));
            sub_25734C(v7, 1);
          }
          else
          {
            sub_2575E8(v7, "stopped-threads", "all");
          }
          v11 = sub_23236C(dword_4878EC, dword_4878F0, dword_4878F4);
          if ( v11 != -1 )
            sub_257504(v7, "core", v11);
        }
        sub_256850("*stopped", *(_DWORD *)(v8 + 36));
        sub_690A8(v7, *(_DWORD *)(v8 + 36));
        sub_690C0(v7);
        sub_66598(*(_DWORD *)(v8 + 36));
        sub_256850(&word_356638, *(_DWORD *)(v8 + 36));
        result = sub_25680C(*(_DWORD *)(v8 + 36));
      }
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        break;
      dword_487668 = (int)v2;
    }
  }
  dword_487668 = v14;
  return result;
}
