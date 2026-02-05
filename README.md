# Phân tích và Kiểm soát Rò rỉ Bộ nhớ trên Linux (Linux Memory Leak Analysis & Profiling)

## Tổng quan dự án
Dự án này là một tài liệu thực nghiệm kỹ thuật về hành vi quản lý bộ nhớ động (Dynamic Memory Management) trong môi trường Linux. Dự án tập trung vào việc mô phỏng các kịch bản rò rỉ bộ nhớ (memory leak) trong lập trình C, sau đó sử dụng công cụ Valgrind để phát hiện, trực quan hóa và phân tích các mẫu sử dụng bộ nhớ.

Mục tiêu cốt lõi là minh họa tầm quan trọng sống còn của việc giải phóng tài nguyên (free) trong phát triển phần mềm nhúng, nơi tài nguyên phần cứng thường bị giới hạn, đồng thời chứng minh kỹ năng sử dụng các công cụ gỡ lỗi (debugging tools) chuyên sâu.

## Mục tiêu chính
* **Mô phỏng rò rỉ bộ nhớ:** Xây dựng các kịch bản mã nguồn cố tình cấp phát bộ nhớ trên vùng nhớ Heap (sử dụng malloc, calloc) nhưng không thực hiện thu hồi, mô phỏng các lỗi thường gặp trong thực tế.
* **Phát hiện lỗi:** Sử dụng công cụ Valgrind Memcheck để quét, xác định chính xác vị trí dòng lệnh, kích thước và nguyên nhân gây rò rỉ bộ nhớ.
* **Tối ưu hóa và Khắc phục:** Thực hiện refactor code, bổ sung cơ chế giải phóng bộ nhớ (free) hợp lý và kiểm chứng lại độ ổn định của chương trình.
* **Phân tích so sánh:** Đối chiếu hiệu suất và hành vi hệ thống giữa phiên bản mã nguồn "không an toàn" (unsafe) và "an toàn" (safe) để thấy rõ tác động của việc quản lý bộ nhớ.

## Công nghệ sử dụng
* **Ngôn ngữ:** C 
* **Hệ điều hành:** Linux (Ubuntu / Raspberry Pi OS)
* **Trình biên dịch:** GCC (GNU Compiler Collection)
* **Công cụ Profiling:** Valgrind (Bộ công cụ Memcheck)

## Yêu cầu cài đặt
Đảm bảo máy tính Linux đã được cài đặt trình biên dịch gcc và công cụ valgrind. Nếu chưa, hãy chạy các lệnh sau trên terminal:

## Video tham khảo
https://www.youtube.com/watch?v=aMSm7skbP5A


```bash
sudo apt-get update
sudo apt-get install gcc valgrind
