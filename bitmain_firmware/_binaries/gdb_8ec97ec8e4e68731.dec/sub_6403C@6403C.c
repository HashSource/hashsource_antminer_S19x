int __fastcall sub_6403C(int a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r0
  int v5; // r8
  int v6; // r0
  _DWORD *v7; // r4
  int v8; // r9
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0

  v3 = a3;
  if ( a3 )
    sub_946E0("-thread-list-ids: No arguments required.");
  v4 = sub_240794();
  v5 = *(_DWORD *)sub_242FDC(v4);
  v6 = sub_2578AC(v5, 0);
  v7 = (_DWORD *)dword_48A4D4;
  if ( dword_48A4D4 )
  {
    v8 = -1;
    do
    {
      if ( v7[11] != 2 )
      {
        if ( v7[2] == dword_4878EC && v7[3] == dword_4878F0 && v7[4] == dword_4878F4 )
          v8 = v7[5];
        ++v3;
        v9 = (_DWORD *)sub_242FDC(v6);
        v6 = sub_257504(*v9, "thread-id", v7[5]);
      }
      v7 = (_DWORD *)v7[1];
    }
    while ( v7 );
    v10 = sub_25734C(v5, 0);
    if ( v8 != -1 )
    {
      v11 = (_DWORD *)sub_242FDC(v10);
      v10 = sub_257504(*v11, "current-thread-id", v8);
    }
  }
  else
  {
    v10 = sub_25734C(v5, 0);
  }
  v12 = (_DWORD *)sub_242FDC(v10);
  return sub_257504(*v12, "number-of-threads", v3);
}
