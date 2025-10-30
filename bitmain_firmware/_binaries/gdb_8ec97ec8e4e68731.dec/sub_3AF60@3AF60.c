int __fastcall sub_3AF60(int a1)
{
  int v2; // r5
  int result; // r0

  sub_1FDE24();
  (*(void (__fastcall **)(int, _DWORD))(a1 + 8240))(a1, *(_DWORD *)(a1 + 8236));
  v2 = sub_1FDE14(a1);
  result = sub_1FDE34(a1);
  if ( v2 )
    return sub_3AE0C((_DWORD *)a1);
  return result;
}
