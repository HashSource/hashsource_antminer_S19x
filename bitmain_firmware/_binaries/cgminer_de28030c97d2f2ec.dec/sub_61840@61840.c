int __fastcall sub_61840(int result, _DWORD *a2)
{
  a2[1] = result;
  *a2 = *(_DWORD *)result;
  *(_DWORD *)(*(_DWORD *)result + 4) = a2;
  *(_DWORD *)result = a2;
  return result;
}
