int __fastcall sub_C7EC4(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r4
  int v6; // r2
  int v7; // r3

  v2 = (_DWORD *)sub_242FDC(a1);
  v4 = a1[3];
  v5 = *v2;
  if ( v4 == 8 )
  {
    sub_257380(*v2, "Masked hardware read watchpoint ", v3, 8);
    goto LABEL_6;
  }
  if ( v4 != 9 )
  {
    if ( v4 == 7 )
    {
      sub_257380(*v2, "Masked hardware watchpoint ", v3, 7);
      goto LABEL_6;
    }
    sub_94700((int)"breakpoint.c", 10557, "Invalid hardware watchpoint type.");
  }
  sub_257380(v5, "Masked hardware access (read/write) watchpoint ", v3, v4);
LABEL_6:
  sub_2578AC(v5, 0);
  sub_257504(v5, "number", a1[6]);
  sub_257380(v5, &word_3B6A00, v6, v7);
  sub_2575E8(v5, "exp", a1[34]);
  return sub_25734C(v5, 0);
}
