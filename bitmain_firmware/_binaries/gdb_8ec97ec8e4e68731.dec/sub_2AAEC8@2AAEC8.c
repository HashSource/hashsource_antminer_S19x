int __fastcall sub_2AAEC8(int a1, int a2)
{
  int *v3; // r0
  unsigned int v4; // r1
  int v5; // r5
  _BOOL4 v6; // r4
  unsigned int v8; // r3

  v3 = *(int **)(a1 + 8);
  if ( a2 )
  {
    v4 = (a2 + 7) & 0xFFFFFFF8;
    if ( ((a2 + 7) & 0xFFFFFFF8) == 0 )
    {
LABEL_3:
      v5 = sub_324C4C(v3, v4);
      goto LABEL_4;
    }
  }
  else
  {
    v4 = 8;
  }
  v8 = v3[1];
  if ( v8 < v4 )
    goto LABEL_3;
  v5 = *v3;
  v3[1] = v8 - v4;
  *v3 = v5 + v4;
LABEL_4:
  v6 = a2 != 0;
  if ( v5 )
    v6 = 0;
  if ( v6 )
    ((void (__fastcall *)(int))loc_2A6C48)(6);
  return v5;
}
