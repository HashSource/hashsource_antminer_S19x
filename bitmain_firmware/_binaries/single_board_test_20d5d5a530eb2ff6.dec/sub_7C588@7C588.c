int __fastcall sub_7C588(int result)
{
  int v1; // r4

  if ( *(_DWORD *)(result + 2280) )
  {
    v1 = result;
    sub_7C4D4(result);
    sub_A86F8(*(_DWORD *)(*(_DWORD *)(v1 + 2280) + 32));
    sub_A86F8(*(_DWORD *)(*(_DWORD *)(v1 + 2280) + 40));
    sub_A86F8(*(_DWORD *)(*(_DWORD *)(v1 + 2280) + 48));
    result = CRYPTO_free(*(_DWORD *)(v1 + 2280), "ssl/record/rec_layer_d1.c", 56);
    *(_DWORD *)(v1 + 2280) = 0;
  }
  return result;
}
