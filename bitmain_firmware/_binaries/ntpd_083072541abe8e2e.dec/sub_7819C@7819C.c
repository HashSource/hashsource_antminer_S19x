int __fastcall sub_7819C(int result)
{
  if ( !result )
    sub_6ECC0((int)"./../lib/isc/sha1.c", 270, 2, "context != ((void *)0)");
  *(_DWORD *)result = 1732584193;
  *(_DWORD *)(result + 4) = -271733879;
  *(_DWORD *)(result + 8) = -1732584194;
  *(_DWORD *)(result + 12) = 271733878;
  *(_QWORD *)(result + 16) = 3285377520LL;
  *(_DWORD *)(result + 24) = 0;
  return result;
}
