int __fastcall sub_C4544(int a1)
{
  __int64 v1; // r2
  int v3; // r1
  int v4; // r7
  const char *v5; // r0
  int *v6; // r4
  int *v7; // r6
  int v8; // t1
  int v10; // [sp+0h] [bp-8h] BYREF
  const char *v11; // [sp+4h] [bp-4h]

  v1 = *(_QWORD *)(a1 + 136);
  v3 = *(_DWORD *)(a1 + 24);
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 44);
  if ( HIDWORD(v1) == (_DWORD)v1 )
    return sub_259F10("Catchpoint %d (any syscall)", v3);
  if ( (unsigned int)(HIDWORD(v1) - v1) <= 7 )
    LOWORD(v5) = -11720;
  else
    LOWORD(v5) = -11744;
  HIWORD(v5) = 55;
  sub_259F10(v5, v3);
  v6 = *(int **)(a1 + 136);
  v7 = *(int **)(a1 + 140);
  while ( v7 != v6 )
  {
    while ( 1 )
    {
      v8 = *v6++;
      sub_275A58(v4, v8, &v10);
      if ( !v11 )
        break;
      sub_259F10(" '%s' [%d]", v11, v10);
      if ( v7 == v6 )
        return sub_259F10(")");
    }
    sub_259F10(" %d", v10);
  }
  return sub_259F10(")");
}
