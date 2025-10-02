def tinh_tien(kwh, bang_gia):
    tong_tien = 0
    da_tinh = 0 
    for gioi_han, don_gia in bang_gia:
        so_kwh = min(kwh, gioi_han) - da_tinh
        if so_kwh <= 0:
            break
        tong_tien += so_kwh * don_gia * 1000
        da_tinh += so_kwh
    return tong_tien * 1.1  #cộng VAT
k = int(input())
bang_hien_hanh = [
    (50,  1.728),
    (100, 1.786),
    (200, 2.074),
    (300, 2.612),
    (400, 2.919),
    (10**9, 3.015)
]
bang_de_xuat = [
    (100, 1.728),
    (200, 2.074),
    (400, 2.612),
    (700, 3.111),
    (10**9, 3.457)
]
tien_hien_hanh = tinh_tien(k, bang_hien_hanh)
tien_de_xuat   = tinh_tien(k, bang_de_xuat)
chenh_lech = tien_de_xuat - tien_hien_hanh
print(f"{chenh_lech:.2f}")
