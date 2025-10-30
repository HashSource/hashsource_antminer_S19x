int __fastcall sub_19168C(int *a1, int a2)
{
  int *v4; // r0
  int v5; // lr
  int v6; // r12
  int result; // r0
  int v8; // [sp+4h] [bp-8h] BYREF

  v4 = (int *)*((_DWORD *)sub_1911C0() + 1);
  v5 = *a1;
  *a1 = 0;
  v6 = *v4;
  v8 = v5;
  (*(void (__fastcall **)(int *, int *, int))(v6 + 28))(v4, &v8, a2);
  result = v8;
  if ( v8 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  return result;
}
