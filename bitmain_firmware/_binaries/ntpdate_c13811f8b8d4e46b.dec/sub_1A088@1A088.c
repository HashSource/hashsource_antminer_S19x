int __fastcall sub_1A088(_DWORD *a1)
{
  DIR *v1; // r0

  if ( !a1 || *a1 != 1145655850 || (v1 = (DIR *)a1[322]) == 0 )
    sub_1073C();
  rewinddir(v1);
  return 0;
}
