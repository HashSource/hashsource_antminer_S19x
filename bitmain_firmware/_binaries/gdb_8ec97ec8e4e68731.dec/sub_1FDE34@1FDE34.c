void __fastcall sub_1FDE34(void *ptr)
{
  if ( *(_DWORD *)ptr == 1 )
    free(ptr);
  else
    --*(_DWORD *)ptr;
}
