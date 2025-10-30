_DWORD *__fastcall sub_99288(_DWORD *a1, char *s)
{
  size_t v4; // r0
  _BYTE *v5; // r1
  int v6; // r5
  _BYTE *v7; // r3

  v4 = strlen(s);
  v6 = v4 >> 1;
  *a1 = 0;
  a1[1] = 0;
  if ( !(v4 >> 1) )
    v5 = (_BYTE *)(v4 >> 1);
  a1[2] = 0;
  if ( v4 >> 1 )
  {
    v5 = sub_9836C(v4 >> 1);
    v7 = &v5[v6];
    *a1 = v5;
    a1[2] = &v5[v6];
  }
  else
  {
    v7 = (_BYTE *)(v4 >> 1);
  }
  a1[1] = v7;
  sub_991F8((unsigned __int8 *)s, v5, v6);
  return a1;
}
